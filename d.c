#include "main.h"
/**
 * print_integer - print integer digit by digit
 * @integer: integer
 * Return: i
 */
int print_integer(int integer)
{
	int remainder = 0;
	int min = -2147483648;
   
	if (integer  < 0 && integer != min)
    {
        _putchar('-');
        integer = 0 - integer;
    }    
	if (integer < 1)
        return (1);
	remainder = integer % 10;
	integer = integer / 10;    
	return (print_integer(integer) + _putchar(remainder + 48));
}
/**
 * integer - print integer
 * @ap: list with variadic arguments, expected to a be int
 * Return: print_integer function
 */
int integer(va_list ap)
{
    int a, nb_int = 0;

	a = va_arg(ap, int);
	nb_int = print_integer(a);
	if (a == 0)
    {
        _putchar('0');
        return (1);
    } 
	if (a > 0)
		nb_int = nb_int - 1;
	return (nb_int);
}