#include "main.h"
/**
 * 
 */
int _printf(const char *format, ...)
{
	int i = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			get_function(format[i + 1]);
		}
		else
		{
			_putchar(format[i]);
		}
		i++;
	}
}