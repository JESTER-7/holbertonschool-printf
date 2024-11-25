#include "main.h"

/**
 * get_slash - print a \ or a \?
 * @c: the character
 */

int get_slash(char c)
{
	if (c == 'n')
		_putchar('\n');
	else if (c == 'a')
		_putchar('\a');
	else if (c == 'b')
		_putchar('\b');
	else if (c == 'f')
		_putchar('\f');
	else if (c == 'r')
		_putchar('\r');
	else if (c == 't')
		_putchar('\t');
	else if (c == 'v')
		_putchar('\v');
	else
		_putchar(c);
    return (1);
}