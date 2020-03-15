#include "holberton.h"
/**
 * _printf - function print string
 * @format: is a parameter
 * Return: Always success
 */
int _printf(const char *format, ...)
{
		int cont = 0, i;

	va_list formato;

	va_start(formato, format);

	if (format == NULL)
		return (-1);
	for (i = 0; format && format[i]; i++)
	{
		if (format[i] == '%' && format[i + 1] != '\0')
		{
			if (format[i + 1] == ' ')
				exit(255);
			else
				print_func(format, formato);
		}
		else if (format[i] == '%' && format[i + 1] == '\0')
			exit(255);
		else
			_putchar(format[i]);
	}
	va_end(formato);
	return (0);
}
