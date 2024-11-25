#include "main.h"
/**
 * _printf - litteraly printf
 * @format: 
 */
int _printf(const char *format, ...)
{
	int i = 0;
	int compteur = 0;
	int result_function = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '\\')
		{
			i = i + 1;
			if (format[i] == 'n')
				_putchar('\n');
			else if (format[i] == 'a')
				_putchar('\a');
			else if (format[i] == 'b')
				_putchar('\b');
			else if (format[i] == 'f')
				_putchar('\f');
			else if (format[i] == 'r')
				_putchar('\r');
			else if (format[i] == 't')
				_putchar('\t');
			else if (format[i] == 'v')
				_putchar('\v');
			else
				_putchar(format[i]);
			compteur++;
		}
		else if (format[i] == '%')
		{
			result_function = get_function(format[i + 1]);
			compteur = result_function + compteur;
			if (result_function == NULL)
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