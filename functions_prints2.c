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
	char *ptr = va_arg(formato, char *);

	int len = _strlen(ptr);

	if (ptr == NULL)
		return (1);
	write(1, ptr, len);

	return (len);
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
