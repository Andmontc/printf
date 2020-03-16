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
	{
		ptr = "(null)";
		return (1);
	}
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
 * print_i - functions that prints digits
 * @formato: parameter to print
 * Return: counter
 */
int print_i(va_list formato)
{
	int arr[10];
	int i, value, num, sum, j;

	num = va_arg(formato, int);
	j = 0;
	value = 1000000000;
	arr[0] = num / value;
	for (i = 1; i < 10; i++)
	{
		value /= 10;
		arr[i] = (num / value) % 10;
	}
	if (num < 0)
	{
		_putchar('-');
		j++;
		for (i = 0; i < 10; i++)
			arr[i] *= -1;
	}
	for (i = 0, sum = 0; i < 10; i++)
	{
		sum += arr[i];
		if (sum != 0 || i == 9)
		{
			_putchar('0' + arr[i]);
			j++;
		}
	}
	return (j);
}

/**
 * print_d - prints a decimal
 * @formato: decimal to print
 * Return: number of digits printed and if negative adds the sign printed
 */
int print_d(va_list formato)
{
	int a[10];
	int i, value, num, sum, j;

	num = va_arg(formato, int);
	j = 0;
	value = 1000000000;
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
