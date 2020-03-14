#include "holberton.h"
/**
 * _printf - function print string
 * @format: is a parameter
 * Return: Always success
 */
int _printf(const char *format, ...)
{
	argum fm[] = {
		{"c", print_c},
		{"s", print_s},
		//{"%", print_p},//
		{NULL, NULL}
	};
	va_list formato;

	va_start(formato, format);

	int i, j, cont = 0;

	i = 0;

	while (format && format[i])
	{
		if (format[i] == '%' && format[i + 1] != '\0')
		{
			j = 0;
			while (j < 2)
			{
				if ((format[i] == '%') && (format[i + 1] == *fm[j].op))
				{
					fm[j].f(formato);
					i++;
				}
				j++;
			}
		}
		else if (format[i] == '%' && format[i + 1] == '\0')
			exit(255);
		else

			_putchar(format[i]);
		i++;
	}
	va_end(formato);
	return (0);
}
