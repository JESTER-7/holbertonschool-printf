#ifndef PRINTF
#define PRINTF
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
int _putchar(char c);
int _printf(const char *format, ...);
typedef struct printf
{
	char *op;
	int (*f)(va_arg);
} print;
#endif