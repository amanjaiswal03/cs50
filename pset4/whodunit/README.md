# Questions

## What's `stdint.h`?

stdint.h is a header file in C library to allow programmers to write more portable code by providing a set of typedefs that specify exact-width integer types,
together with the defined minimum and maximum allowable values for each type, using macros .

## What's the point of using `uint8_t`, `uint32_t`, `int32_t`, and `uint16_t` in a program?

it makes clear that you intend to use the data a specific way.
	uint24_t means an integer that is exactly 24 bits wide.


## How many bytes is a `BYTE`, a `DWORD`, a `LONG`, and a `WORD`, respectively?

BYTE is 1 byte
DWORD is 4 bytes
LONG is 4 bytes
WORD is 2 bytes

## What (in ASCII, decimal, or hexadecimal) must the first two bytes of any BMP file be? Leading bytes used to identify file formats (with high probability) are generally called "magic numbers."

The first two bytes of a BMP is a WORD and denotes bfType, which specifies the file type. It must be
 	set to the signature word BM (0x4D42) to indicate bitmap.

## What's the difference between `bfSize` and `biSize`?

bfSize specifies the size, in bytes, of the bitmap file.
biSize specifies the size of the structure in bytes.


## What does it mean if `biHeight` is negative?

If biHeight is negative, the bitmap is a top-down DIB (device-independent bitmap)
and its origin is the upper left corner.

## What field in `BITMAPINFOHEADER` specifies the BMP's color depth (i.e., bits per pixel)?

The biBitCount member of the BITMAPINFOHEADER structure determines the number of
bits that define each pixel and the maximum number of colors in the bitmap.

## Why might `fopen` return `NULL` in lines 24 and 32 of `copy.c`?

TODO

## Why is the third argument to `fread` always `1` in our code?

TODO

## What value does line 65 of `copy.c` assign to `padding` if `bi.biWidth` is `3`?

TODO

## What does `fseek` do?

TODO

## What is `SEEK_CUR`?

TODO

## Whodunit?

TODO
