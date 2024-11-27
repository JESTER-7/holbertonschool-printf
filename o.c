#include "main.h"
#include <stdarg.h>
#include <limits.h>
#include <stdio.h>


/**
 * octalnumber - calculating octal from decimal
 * @nb: decimal number
 *
 * Return: nb of characters printed
 */

int octalnumber(unsigned int nb)
{
	int reminder = 0;

	if (nb < 1)
		return (1);

	reminder = nb % 8;

	nb = nb / 8;

	return (octalnumber(nb) + _putchar(reminder + 48));
}

/**
 * int_to_octal - prints a decimal number to stout in octal version
 * @ap: list with variadic arguments, expected to a be an unsigned int
 *
 * Return: nb of characters printed
 */

int int_to_octal(va_list ap)
{
	int nb_char_printed = 0;
	unsigned int number = (unsigned int)va_arg(ap, int);

	if (number == 0)
	{
		_putchar(48);
		return (1);
	}

	nb_char_printed = octalnumber(number);
	return (nb_char_printed - 1);
}
