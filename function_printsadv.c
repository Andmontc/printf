#include "holberton.h"

/**
 * print_u - unsigned number
 * @formato: is a parameter
 * Return: length of string
 */
int print_u(va_list formato)
{
	unsigned int a[10];
	unsigned int i, value, num, sum, j;

	num = va_arg(formato, int);
	j = 0;
	value = 1000000000;
	a[0] = num / value;
	for (i = 1; i < 10; i++)
	{
		value /= 10;
		a[i] = (num / value) % 10;
	}
	for (i = 0, sum = 0; i < 10; i++)
	{
		sum += a[i];
		if (sum != 0 || i == 9)
		{
			_putchar(a[i] + 48);
			j++;
		}
	}
	return (j);
}