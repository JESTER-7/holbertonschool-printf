#include "main.h"
#include <stdarg.h>
#include <stdio.h>

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
		{'b', int_to_binary},
		{'u', unsigned_int},
		{'\0', NULL}
	};
	int i;

	for (i = 0; array[i].op != '\0'; i++)
	{
		if ((array[i].op) == s)
			return (array[i].f);
	}

	return (NULL);
}
