#include "main.h"
#include <stdarg.h>
#include <limits.h>
#include <stdio.h>

/**
 * print_upper_hexa - printig hexadecimal
 * @remainder: decimal number
 *
 * Return: nb of characters printed
 */

int print_upper_hexa(int remainder)
{
	if (remainder < 10)
		_putchar(remainder + 48);
	else
		_putchar((remainder % 10) + 65);
	return (1);
}

/**
 * hexanumberUpper - calculating hexadecimal from decimal
 * @nb: decimal number
 *
 * Return: nb of characters printed
 */

int hexanumberUpper(unsigned int nb)
{
	int remainder = 0;

	if (nb < 1)
		return (1);

	remainder = nb % 16;

	nb = nb / 16;

	return (hexanumberUpper(nb) + print_upper_hexa(remainder));
}

/**
 * int_to_hexa_upper - prints a dec number to stout in hexal (uppercase)
 * @ap: list with variadic arguments, expected to a be an unsigned int
 *
 * Return: nb of characters printed
 */

int int_to_hexa_upper(va_list ap)
{
	int nb_char_printed = 0;
	unsigned int number = (unsigned int)va_arg(ap, int);

	if (number == 0)
	{
		_putchar(48);
		return (1);
	}

	nb_char_printed = hexanumberUpper(number);
	return (nb_char_printed - 1);
}
