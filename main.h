#ifndef PRINTF
#define PRINTF

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);
int (*get_function(char s))(va_list);
int percent(va_list);
int integer(va_list);
int integerten(va_list);
int character(va_list);
int string(va_list);
int (*get_slash(char c))(void);
int print_integer(int integer);
int print_integerten(int integer);
int int_to_binary(va_list ap);
int unsigned_int(va_list ap);
int int_to_octal(va_list ap);
int int_to_hexa_lower(va_list ap);
int int_to_hexa_upper(va_list ap);

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
int _putchar(char c);

/**
 * struct printf - combi format specifier - print function
 * @op: letter
 * @f: function pointer that will handle printing and return nb of printed char
 *
 * structure handling the combination of format specifiers and print functions
 */

typedef struct printf
{
	char op;
	int (*f)(va_list p);
} print;

/**
 * struct slashstruc - combi letter after \ - print function
 * @op: letter
 * @f: function pointer that will handle printing and return nb of printed char
 *
 * structure handling the combination of letter afetr \ and print functions
 */

typedef struct slashstruc
{
	char op;
	int (*f)(void);
} slash;

#endif
