#include "main.h"
#include <stdarg.h>
#include <limits.h>
#include <stdio.h>

/**
 * printDecimal - printing dec nb
 * @nb: decimal number
 *
 * Return: nb of characters printed
 */

int printDecimal(unsigned int nb)
{
	int reminder = 0;

	if (nb < 1)
		return (1);

	reminder = nb % 10;

	nb = nb / 10;

	return (printDecimal(nb) + _putchar(reminder + 48));
}

/**
 * unsigned_int - prints an unsigned int to stout
 * @ap: list with variadic arguments, expected to a be an unsigned int
 *
 * Return: nb of printed char
 */

int unsigned_int(va_list ap)
{
	int nb_char_printed = 0;
	unsigned int number = (unsigned int)va_arg(ap, int);

	if (number == 0)
	{
		_putchar(48);
		return (1);
	}

	nb_char_printed = printDecimal(number) - 1;
	return (nb_char_printed);
}
