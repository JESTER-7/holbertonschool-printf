#include "main.h"
#include <stdarg.h>

/**
 * checknumber - calculating binary from decimal (except first 1)
 * @nb: decimal number
 *
 * Return: recursive function: 1 if finished and prints in reverse order
 */

int checknumber(int nb)
{
	int reminder = 0;

	if (nb == 1)
		return (1);

	reminder = nb % 2;

	if (reminder == 1)
		nb--;

	nb = nb / 2;

	return (checknumber(nb) + _putchar(reminder + 48));
}

/**
 * int_to_binary - prints a binary number to stout
 * @ap: list with variadic arguments, expected to a be an unsigned int
 *
 * Return: 1 on succes
 */

int int_to_binary(va_list ap)
{
	unsigned int number = va_arg(ap, int);

	_putchar(49);
	checknumber(number);
	return (1);
}
