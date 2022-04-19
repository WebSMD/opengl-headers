<?php

/**
 * This file is part of FFI package.
 *
 * For the full copyright and license information, please view the LICENSE
 * file that was distributed with this source code.
 */

declare(strict_types=1);

namespace FFI\Headers\OpenGL;

interface ExtensionInterface
{
    /**
     * @return non-empty-string
     */
    public function getName(): string;
}