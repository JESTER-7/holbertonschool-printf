#include "main.h"
#include <stdarg.h>

/**
 * _printf - litteraly printf
 * @format: the string to be printed (can contain format specifiers)
 * @...: variadic arguments containing corresponding inserts to be printed
 *
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	int i = 0, nb_char_printed = 0, result_f = 0, result_ff = 0;
	int (*f)(va_list);
	va_list ap;

	if (format == NULL)
		return (-1);
	va_start(ap, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '\\')
		{
			i++;
			result_ff = get_slash(format[i])();
			nb_char_printed += result_ff;
		}
		else if (format[i] == '%')
		{
			i++;
			f = get_function(format[i]);
			if (f == NULL)
			{
				_putchar('%');
				_putchar(format[i]);
				nb_char_printed = nb_char_printed + 2;
			}
			else
			{
				result_f = f(ap);
				if (result_f == -1)
					return (-1);
				nb_char_printed += result_f;
			}
		}
		else
		{
			_putchar(format[i]);
			nb_char_printed++;
		}
	}
	return (nb_char_printed);
}
