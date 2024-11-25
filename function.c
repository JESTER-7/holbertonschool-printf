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
			compteur = compteur + get_slash(i);
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