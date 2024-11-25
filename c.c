#include "main.h"
#include <stdarg.h>

/**
 * 
 */

int character(va_list ap)
{
	char lettre = va_arg(ap, int);

	_putchar(lettre);
	return(1);
}