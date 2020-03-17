#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
	char op;
	int (*f)();
} argum;

int _printf(const char *format, ...);
int print_func(const char *format, argum fm[], va_list formato);
int _putchar(char c);
int print_c(va_list formato);
int print_s(va_list formato);
int print_p(void);
int _strlen(char *s);
int print_d(va_list formato);
int print_i(va_list formato);
int print_u(va_list formato);
int print_r(va_list formato);
void print_rev(char *s);
int print_b(va_list formato);
int rot13(char *s);
int print_R(va_list formato);

#endif
