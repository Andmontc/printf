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

	for (i = 0; format != NULL && format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
				return (-1);
			cont += print_func(formato, format[i + 1]);
			i++;
		}
		else
			cont += _putchar(format[i]);
	}
	va_end(formato);
	return (cont);
}
