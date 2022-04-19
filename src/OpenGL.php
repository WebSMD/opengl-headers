<?php

/**
 * This file is part of FFI package.
 *
 * For the full copyright and license information, please view the LICENSE
 * file that was distributed with this source code.
 */

declare(strict_types=1);

namespace FFI\Headers;

use FFI\Contracts\Headers\HeaderInterface;
use FFI\Contracts\Headers\VersionInterface;
use FFI\Contracts\Preprocessor\Exception\DirectiveDefinitionExceptionInterface;
use FFI\Contracts\Preprocessor\Exception\PreprocessorExceptionInterface;
use FFI\Contracts\Preprocessor\PreprocessorInterface;
use FFI\Headers\OpenGL\Extension;
use FFI\Headers\OpenGL\ExtensionInterface;
use FFI\Headers\OpenGL\Platform;
use FFI\Headers\OpenGL\Version;
use FFI\Preprocessor\Option;
use FFI\Preprocessor\Preprocessor;

class OpenGL implements HeaderInterface
{
    /**
     * @var non-empty-string
     */
    private const HEADERS_DIRECTORY = __DIR__ . '/../resources/headers';

    /**
     * @param PreprocessorInterface $pre
     * @param VersionInterface $version
     */
    public function __construct(
        public readonly PreprocessorInterface $pre,
        public readonly VersionInterface $version = Version::LATEST,
    ) {
    }

    /**
     * @return non-empty-string
     */
    public function getHeaderPathname(): string
    {
        return self::HEADERS_DIRECTORY . '/gl.h';
    }

    /**
     * @param bool $coreProfile
     * @param Platform|null $platform
     * @param array<ExtensionInterface> $extensions
     * @param VersionInterface|non-empty-string $version
     * @param PreprocessorInterface $pre
     * @return self
     * @throws DirectiveDefinitionExceptionInterface
     */
    public static function create(
        bool $coreProfile = true,
        Platform $platform = null,
        array $extensions = [],
        VersionInterface|string $version = Version::LATEST,
        PreprocessorInterface $pre = new Preprocessor(),
    ): self {
        if (!$version instanceof VersionInterface) {
            $version = Version::create($version);
        }

        $pre = clone $pre;

        $pre->add('GL/gl.h', '');
        $pre->add('stdint.h', '');
        $pre->add('inttypes.h', '');

        $pre->include(self::HEADERS_DIRECTORY);
        $pre->include(self::HEADERS_DIRECTORY . '/platform');

        $pre->define('GL_CORE_PROFILE', (int)$coreProfile);

        if ($platform === Platform::GLX) {
            $pre->define('GL_INCLUDE_GLX', '1');
        }

        if ($platform === Platform::WGL) {
            $pre->define('GL_INCLUDE_WGL', '1');
        }

        foreach (Version::cases() as $case) {
            if ($version->lt($case)) {
                $name = \str_replace('.', '_', $version->toString());
                $pre->define('GL_VERSION_' . $name, '1');
            }
        }

        $excluded = \array_map(Extension::toString(...), $extensions);
        foreach (Extension::cases() as $case) {
            if (!\in_array($case->getName(), $excluded, true)) {
                $pre->define($case->getName(), '1');
            }
        }

        return new self($pre, $version);
    }


    /**
     * @return non-empty-string
     * @throws PreprocessorExceptionInterface
     */
    public function __toString(): string
    {
        $options = Option::KEEP_DEBUG_COMMENTS;

        return $this->pre->process(new \SplFileInfo($this->getHeaderPathname()), $options) . \PHP_EOL;
    }
}
