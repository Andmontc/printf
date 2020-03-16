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
		if (format[i] == '%')
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
			if (fm[j].op == '\0' || format[i] == ' ')
				return (-1);
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
