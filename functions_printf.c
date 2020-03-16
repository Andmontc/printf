#include "holberton.h"
/**
 * print_func - function print
 * @format: is a parameter
 * @fm: struct
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
			for (j = 0; fm[j].op != '\0'; j++)
			{
				if (format[i + 1] == fm[j].op)
				{
					cont += fm[j].f(formato);
					i++;
					break;
				}
			}
			if (fm[j].op == '\0')
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
 * print_rev - function that prints a string
 * @s: The string to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_rev(char *s)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
		;

	for (j = i - 1; j >= 0; j--)
		_putchar(s[j]);
}
