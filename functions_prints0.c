#include "holberton.h"
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
	int i;
	char *ptr = va_arg(formato, char *);

	if (ptr == NULL)
	{
		ptr = "(null)";
		return (-1);
	}
	for (i = 0; ptr[i]; i++)
	{
		_putchar(ptr[i]);
	}
return (i);
}
/**
 * print_p - function porcent
 * Return: 1
 */
int print_p(void)
{
	_putchar('%');
	return (1);
}
