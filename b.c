#include "main.h"
#include <stdarg.h>
#include <limits.h>
#include <stdio.h>


/**
 * checknumber - calculating binary from decimal (except first 1)
 * @nb: decimal number
 *
 * Return: nb of characters printed
 */

int checknumber(unsigned int nb)
{
	int reminder = 0;
	int nb_char_printed = 0;

	if (nb == 1)
		return (1);

	reminder = nb % 2;

	if (reminder == 1)
		nb--;

	nb = nb / 2;

	nb_char_printed++;

	return (checknumber(nb) + _putchar(reminder + 48));

	return (nb_char_printed);
}

/**
 * int_to_binary - prints a binary number to stout
 * @ap: list with variadic arguments, expected to a be an unsigned int
 *
 * Return: 1 on succes
 */

int int_to_binary(va_list ap)
{
	int nb_char_printed = 0;
	unsigned int number = (unsigned int)va_arg(ap, int);

	if (number == 0)
	{
		_putchar(48);
		return (1);
	}

	_putchar(49);
	nb_char_printed++;

	nb_char_printed = checknumber(number);
	return (nb_char_printed);
}
