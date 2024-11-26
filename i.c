#include "main.h"
/**
 * integerten - print integer in base 10
 * @ap: list with variadic arguments, expected to a be int
 * Return: i
 */
int integer(va_list ap)
{
	int integer = va_arg(ap, int);
	int i = 0;

	if (integer < 0)
	{
		_putchar('-');
		i++;
		integer = -integer;
	}
	if (integer == 0)
	{
		_putchar('0');
		return (1);
	}
	i += print_integer(i);
	return (i);
}
/**
 * print_integer - print integer digit by digit
 * @integer: integer
 * Return: i
 */
int print_integer(int integer)
{
	int i = 0;

	if (integer / 10)
		i += print_integer(integer / 10);
	_putchar((integer % 10) + '0');
	i++;
	return (i);
}