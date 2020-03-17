#include "holberton.h"
/**
 * print_func - function print
 * @c: is a parameter
 * @formato: is a parameter
 * Return: length of string
 */
int print_func(va_list formato, char c)
{
	int i;

	argum fm[] = {
		{'c', print_c},
		{'s', print_s},
		{'%', print_p},
		{'d', print_d},
		{'i', print_d},
		{'u', print_u},
		{'r', print_r},
		{'b', print_b},
		{'R', print_R},
		{'o', print_o},
		{'\0', NULL}
	};

	for (i = 0; fm[i].op; i++)
	{
		if (c == fm[i].op)
		{
			return (fm[i].f(formato));
		}
	}
	return (1);
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
/**
 * print_rev - function that prints a string
 * @s: The string to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_rev(char *s)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	;

	for (j = i - 1; j >= 0; j--)
		_putchar(s[j]);
}
/**
* *rot13 - function rot
* @s: string
* Return: srrin in rot13
*/
int rot13(char *s)
{
	int i, j, len;
	char am[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char nz[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	len = _strlen(s);
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j <= 51; j++)
		{
			if (s[i] == am[j])
			{
				_putchar(nz[j]);
				break;
			}
			else if (s[i] == nz[j])
			{
				_putchar(am[j]);
				break;
			}
		}
		if (j > 51)
		{
			_putchar(s[i]);
		}
	}
	return (len);
}
