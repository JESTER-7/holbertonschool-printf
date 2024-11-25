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
	int result_function = 0;
	int (*function)(va_list);
	va_list ap;

	va_start(ap, format);

	while (format[i] != '\0')
	{
		if (format[i] == '\\')
		{
			i++;
			compteur += get_slash(i);
		}
		else if (format[i] == '%')
		{
			i++;
			function = get_function(format[i]);
			if (function == NULL)
				exit(99);
			result_function = function(ap);
			if (result_function == -1)
				exit(99);
			compteur += result_function;
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
