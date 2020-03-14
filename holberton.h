#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
	char *op;
	int (*f)(va_list);
} argum;

int _printf(const char *format, ...);
int _putchar(char c);
int print_c(va_list formato);
int print_s(va_list formato);
void print_p(va_list formato);

#endif
