#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * _printf - litteraly printf
 * @format: the string to be printed
 *
 * Return: number of characyers printed
 */

int _printf(const char *format, ...)
{
	int i = 0;
	int compteur = 0;
	int result_f = 0;
	int result_ff = 0;
	int (*f)(va_list);
	int (*ff)(void);
	va_list ap;

	if (format == NULL)
		exit(99);

	va_start(ap, format);

	while (format[i] != '\0')
	{
		if (format[i] == '\\')
		{
			i++;
			ff = get_slash(format[i]);
			if (ff == NULL)
				exit(99);
			result_ff = ff();
			compteur += result_ff;
		}
		else if (format[i] == '%')
		{
			i++;
			f = get_function(format[i]);
			if (f == NULL)
				exit(99);
			result_f = f(ap);
			if (result_f == -1)
				exit(99);
			compteur += result_f;
		}
		else
		{
			_putchar(format[i]);
			compteur++;
		}
		i++;
	}
	return (compteur);
}
