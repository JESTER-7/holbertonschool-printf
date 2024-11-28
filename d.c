#include "main.h"
/**
 * print_integer - print integer digit by digit
 * @integer: integer
 * Return: i
 */
int print_integer(int integer)
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
	if (j / 10) /* is not 0 */
		i += print_integer(j / 10); /* print recursively */
	_putchar((j % 10) + '0'); /* print the last digit */
	return (i);
}
/**
 * integer - print integer
 * @ap: list with variadic arguments, expected to a be int
 * Return: print_integer function
 */
int integer(va_list ap)
{
	int a;

	a = va_arg(ap, int);
	return (print_integer(a));
}