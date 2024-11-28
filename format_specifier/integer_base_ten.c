#include "main.h"
#include <limits.h>
/**
 * print_integerten - print integer digit by digit
 * @integer: integer
 * Return: i
 */
int print_integerten(int integer)
{
	int remainder = 0;

	if (integer  < 0 && integer != INT_MIN)
	{
		_putchar('-');
		integer = 0 - integer;
	}

	if (integer < 1 && integer != INT_MIN)
		return (1);
	remainder = integer % 10;
	if (remainder < 0)
		remainder = 0 - remainder;
	integer = integer / 10;
	return (print_integerten(integer) + _putchar(remainder + 48));
}
/**
 * integerten - print integer
 * @ap: list with variadic arguments, expected to a be int
 * Return: print_integerten function
 */
int integerten(va_list ap)
{
	int a, nb_int = 0;

	a = va_arg(ap, int);
	nb_int = print_integerten(a);
	if (a == 0)
	{
		_putchar('0');
		return (1);
	}
	if (a > 0)
		nb_int = nb_int - 1;
	return (nb_int);
}
