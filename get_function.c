#include "main.h"
#include <stdarg.h>

/**
 * get_function - gets the corresponding function
 * @s: the  corresponding character
 *
 * Return: pointer to a function taking va_list and returning nb of char
 */

int (*get_function(char s))(va_list)
{
	print array[] = {
		{'c', character},
		{'s', string},
		{'%', percent},
		{'d', integer},
		{'i', integerten},
		{'\0', NULL}
	};
	int i = 0;

	while (array[i].op != '\0' && (array[i].op) != s)
		i++;

	if ((array[i].op) == s)
		return (array[i].f);

	return (NULL);
}
