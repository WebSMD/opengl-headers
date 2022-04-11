<?php

/**
 * This file is part of FFI package.
 *
 * For the full copyright and license information, please view the LICENSE
 * file that was distributed with this source code.
 */

declare(strict_types=1);

namespace FFI\Headers\OpenGL;

use FFI\Contracts\Headers\Version as CustomVersion;
use FFI\Contracts\Headers\Version\Comparable;
use FFI\Contracts\Headers\Version\ComparableInterface;
use FFI\Contracts\Headers\VersionInterface;

enum Version: string implements ComparableInterface
{
    use Comparable;

    case V1_0 = '1.0';
    case V1_1 = '1.1';
    case V1_2 = '1.2';
    case V1_3 = '1.3';
    case V1_4 = '1.4';
    case V1_5 = '1.5';
    case V2_0 = '2.0';
    case V2_1 = '2.1';
    case V3_0 = '3.0';
    case V3_1 = '3.1';
    case V3_2 = '3.2';
    case V3_3 = '3.3';
    case V4_0 = '4.0';
    case V4_1 = '4.1';
    case V4_2 = '4.2';
    case V4_3 = '4.3';
    case V4_4 = '4.4';
    case V4_5 = '4.5';
    case V4_6 = '4.6';

    public const LATEST = self::V4_6;

    /**
     * @param non-empty-string $version
     * @return VersionInterface
     */
    public static function create(string $version): VersionInterface
    {
        /** @var array<non-empty-string, VersionInterface> $versions */
        static $versions = [];

        return self::tryFrom($version)
            ?? $versions[$version]
            ??= CustomVersion::fromString($version)
        ;
    }

    /**
     * {@inheritDoc}
     */
    public function toString(): string
    {
        return $this->value;
    }
}
