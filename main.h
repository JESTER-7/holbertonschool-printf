#ifndef PRINTF
#define PRINTF

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int _putchar(char c);
int _printf(const char *format, ...);
int (*get_function(char s))(va_list);
int percent(va_list);
int integer(va_list);
int integerten(va_list);
int character(va_list);
int string(va_list);
int (*get_slash(char c))(void);

int slashn(void);
int slasha(void);
int slashb(void);
int slashf(void);
int slashr(void);
int slasht(void);
int slashv(void);
int slashslash(void);
int slashdoublequote(void);
int slashsinglequote(void);

typedef struct printf
{
	char op;
	int (*f)(va_list p);
} print;

typedef struct slashstruc
{
	char op;
	int (*f)(void);
} slash;

#endif
