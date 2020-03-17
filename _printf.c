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

	for (i = 0; format && format[i]; i++)
	{
		if (format[i] && format[i] != '%')
		{
			cont += _putchar(format[i]);
		}
		if (format[i] == '%')
		{
			while (format[i + 1] == ' ')
				i++;
			if (format[i + 1] == '\0')
				return (-1);
			cont += print_func(formato, format[i + 1]);
			i++;
		}
	}
	va_end(formato);
	return (cont);
}
