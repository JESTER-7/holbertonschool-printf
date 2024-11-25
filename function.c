#include "main.h"
#include <stdarg.h>

/**
 * _printf - litteraly printf
 * @format: 
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
			compteur = compteur + get_slash(i);
		}
		else if (format[i] == '%')
		{
			i++;
			function = get_function(format[i]);
			result_function = function(ap);
			compteur = result_function + compteur;
			if (result_function == 0)
				exit(99);
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
