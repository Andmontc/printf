#include "holberton.h"
#include "holberton.h"
#include <stdio.h>
/**
 * print_function - function print
 * @format: is a parameter
 * @formato: is a parameter
 * Return: length of string
 */
int print_func(const char *format, argum fm[], va_list formato)
{
	int i, j, cont = 0;

	for (i = 0; format && format[i]; i++)
	{
		if (format[i] == '%' && format[i + 1] != '\0')
		{
			for (j = 0; *fm[j].op != '\0'; j++)
			{
				if ((format[i + 1] == *fm[j].op))
				{
					cont += fm[j].f(formato);
					i++;
					break;
				}
			}
			if (*fm[j].op == '\0')
				cont += _putchar('%');
		}
		else
			cont += _putchar(format[i]);
	}
	return (cont);
}
/**
 * _strlen - function that returns the length of a string
 * @s: is a parameter
 * Return: length
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;

	return (i);
}
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * print_c - function print caracter
 * @formato: is a parameter to print
 * Return: length of string
 */
int print_c(va_list formato)
{
	int i = 0;

	i = _putchar(va_arg(formato, int));
	return (i);
}
/**
 * print_s - function print string
 * @formato: is a parameter to print
 * Return: length of string
 */
int print_s(va_list formato)
{
	char *ptr = va_arg(formato, char *);

	int len = _strlen(ptr);

	if (ptr == NULL)
		return (1);
	write(1, ptr, len);

	return (len);
}
/**
 * print_p - function porcent
 * @formato: is a parameter to print
 */