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
/**
 * print_d - functions that prints digits
 * @formato: parameter to print
 * Return: counter
 */
int print_d(va_list formato)
{
	int num, i, j = 0, sum = 0;
	int value = 1000000000;
	int a[10];

	num = va_arg(formato, int);
	a[0] = num / value;

	for (i = 1; i < 10; i++)
	{
		value /= 10;
		a[i] = (num / value) % 10;
	}
	if (num < 0)
	{
		_putchar('-');
		j++;
		for (i = 0; i < 10; i++)
			a[i] *= -1;
	}
	i = 0;
	while (i < 10)
	{
		sum += a[i];
		if (sum != 0 || i == 9)
		{
			_putchar(a[i] + 48);
			j++;
		}
	i++;
	}
	return (j);
}
/**
* print_i - functions that prints digits
* @formato: parameter to print
* Return: counter
*/
int print_i(va_list formato)
{
	int num, i, j = 0, sum = 0;
	int maxvalue = 1000000000;
	int a[10];

	num = va_arg(formato, int);
	a[0] = num / maxvalue;

	for (i = 1; i < 10; i++)
	{
		maxvalue /= 10;
		a[i] = (num / maxvalue) % 10;
	}
	if (num < 0)
	{
		_putchar('-');
		j++;
		for (i = 0; i < 10; i++)
			a[i] *= -1;
	}
	i = 0;
	while (i < 10)
	{
		sum += a[i];
		if (sum != 0 || i == 9)
		{
			_putchar(a[i] + 48);
			j++;
		}
	i++;
	}
	return (j);
}
