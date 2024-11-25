#include "main.h"
#include <stdarg.h>

/**
 * string - prints a string to stout
 * @ap: list with variadic arguments, expected to be a string
 *
 * Return: number of printed characters
 */

int string(va_list ap)
{
	char *str = va_arg(ap, char*);
	int i;

	if (str != NULL)
	{
		for (i = 0; str[i] != '\0'; i++)
			_putchar(str[i]);
		return (i);
	}
	return (-1);
}
