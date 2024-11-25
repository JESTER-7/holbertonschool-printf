#include "main.h"
#include <stdarg.h>

/**
 * character - prints a character to stout
 * @ap: list with variadic arguments, expected to a be character
 *
 * Return: 1 on succes
 */

int character(va_list ap)
{
	char letter;

	if (ap != NULL)
	{
		letter = va_arg(ap, int);
		_putchar(letter);
		return (1);
	}
	return (-1);
}
