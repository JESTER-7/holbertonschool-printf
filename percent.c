#include "main.h"
/**
 * percent - prints % if _printf take %% as argument
 * @ap: list with variadic arguments, unnecessary for this function
 *
 * Return: 1 on succes
 */

int percent(va_list ap)
{
	(void)ap;
	
	_putchar('%');
	return (1);
}