# Printf

Printf function is used to print the “character, string, float, integer, octal and hexadecimal values” onto the output screen.

## Overview 🚀

_printf() - is a Holberton school group project. The task is to write a custom version of printf() from standard library

Its prototype was defined following:

``int _printf(const char *format, ...);`` 

## Authorized functions and macros 👌

* write (man 2 write)
* malloc (man 3 malloc)
* free (man 3 free)
* va_start (man 3 va_start)
* va_end (man 3 va_end)
* va_copy (man 3 va_copy)
* va_arg (man 3 va_arg)

## Compilation 💻

-Your code will be compiled this way:

```$ gcc -Wall -Werror -Wextra -pedantic *.c```

## Format Specifiers ❕

Function name | Description | Format Specifier
--- | --- | ---
`print_c` | Prints a character | `%c`
`print_s` | Prints a string | `%s`
`print_p` | Prints a % | `%%`
`print_i` | Prints an integer | `%d` & `%i`
`print_o` | Prints number in base 8 | `%o`
`print_b` | Prints a binary, custom specifier | `%b`
`print_hexLower` | Prints hexadecimal in lowercase | `%x`
`print_hexUpper` | Prints hexadecimal in uppercase | `%X`
`print_u` | Prints unsigned integer | `%u`
`print_r` | Prints string in reverse, custom specifier | `%r`
`print_R` | Prints string in rot13, custom specifier | `%R`

## Authors ✒✍

* **Oscar Montes Cuevas** - *GitHub user* - [Andmontc](https://github.com/Andmontc)
* **Nicolas Alvarez Tobon** - *GitHub user* - [NICOLASTOBON](https://github.com/NICOLASTOBON)

---
⌨️ [Holberton School](https://www.holbertonschool.com) 💓