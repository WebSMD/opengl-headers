<p align="center">
    <a href="https://github.com/php-ffi-headers">
        <img src="https://avatars.githubusercontent.com/u/101121010?s=256" width="128" />
    </a>
</p>

<p align="center">
    <a href="https://github.com/php-ffi-headers/opengl-headers/actions"><img src="https://github.com/php-ffi-headers/opengl-headers/workflows/build/badge.svg"></a>
    <a href="https://packagist.org/packages/ffi-headers/opengl-headers"><img src="https://img.shields.io/badge/PHP-8.1.0-ff0140.svg"></a>
    <a href="https://packagist.org/packages/ffi-headers/opengl-headers"><img src="https://img.shields.io/badge/OpenGL-4.6.0-cc3c20.svg"></a>
    <a href="https://packagist.org/packages/ffi-headers/opengl-headers"><img src="https://poser.pugx.org/ffi-headers/opengl-headers/version" alt="Latest Stable Version"></a>
    <a href="https://packagist.org/packages/ffi-headers/opengl-headers"><img src="https://poser.pugx.org/ffi-headers/opengl-headers/v/unstable" alt="Latest Unstable Version"></a>
    <a href="https://packagist.org/packages/ffi-headers/opengl-headers"><img src="https://poser.pugx.org/ffi-headers/opengl-headers/downloads" alt="Total Downloads"></a>
    <a href="https://raw.githubusercontent.com/php-ffi-headers/opengl-headers/master/LICENSE.md"><img src="https://poser.pugx.org/ffi-headers/opengl-headers/license" alt="License MIT"></a>
</p>

# OpenGL Headers

This is a C headers of the [OpenGL](https://github.com/KhronosGroup/OpenGL-Registry) adopted for PHP.

## Requirements

- PHP >= 8.1

## Installation

Library is available as composer repository and can be installed using the
following command in a root of your project.

```sh
$ composer require ffi-headers/opengl-headers
```

## Usage

```php
use FFI\Headers\OpenGL;
use FFI\Headers\OpenGL\Extension;

$gl = OpenGL::create(
    coreProfile: false,                 // Core Profile vs Compat
    platform: OpenGL\Platform::GLX,     // GLX (Unix/Linux) or WGL (Windows) 
    extensions: [                       // List of additional extensions
        Extension::GL_EXT_TEXTURE_COMPRESSION_DXT1,
    ],
);

echo $gl;
```
