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
	int remainder = 0;

	if (nb == 1)
		return (1);

	remainder = nb % 2;

	if (remainder == 1)
		nb--;

	nb = nb / 2;

	return (checknumber(nb) + _putchar(remainder + 48));

}

/**
 * int_to_binary - prints a binary number to stout
 * @ap: list with variadic arguments, expected to a be an unsigned int
 *
 * Return: nb of characters printed
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
