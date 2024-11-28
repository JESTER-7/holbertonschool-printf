#include "main.h"
/**
 * print_integerten - print integer digit by digit
 * @integer: integer
 * Return: i
 */
int print_integerten(int integer)
{
	int i = 0;
	unsigned int j;

	if (integer  < 0)
	{
		_putchar('-');
		i++;
		j = -integer;
	}
	else
		j = integer;
	if (j / 10)
		i += print_integerten(j / 10);
	_putchar((j % 10) + '0');
	return (i);
}
/**
 * integer - print integerten
 * @ap: list with variadic arguments, expected to a be int
 * Return: print_integerten function
 */
int integerten(va_list ap)
{
	int a;

	a = va_arg(ap, int);
	return (print_integerten(a));
}