<?php

/**
 * This file is part of FFI package.
 *
 * For the full copyright and license information, please view the LICENSE
 * file that was distributed with this source code.
 */

declare(strict_types=1);

namespace FFI\Headers\OpenGL;

final class UserExtension implements ExtensionInterface
{
    /**
     * @param non-empty-string $name
     */
    public function __construct(
        private readonly string $name,
    ) {
    }

    /**
     * {@inheritDoc}
     */
    public function getName(): string
    {
        return $this->name;
    }
}
