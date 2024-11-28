#include "main.h"
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
		{'o', int_to_octal},
		{'x', int_to_hexa_lower},
		{'X', int_to_hexa_upper},
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

/**
 * get_slash - handling action with backslashes
 * @c: the character afetr the backslash
 *
 * Return: a function pointer handling special characters
 */

int (*get_slash(char c))(void)
{
	slash array[] = {
		{'n', slashn},
		{'a', slasha},
		{'b', slashb},
		{'f', slashf},
		{'r', slashr},
		{'t', slasht},
		{'v', slashv},
		{'\\', slashslash},
		{'\"', slashdoublequote},
		{'\'', slashsinglequote},
		{'\0', NULL}
	};

	int i = 0;

	for (i = 0; array[i].op != '\0'; i++)
	{
		if ((array[i].op) == c)
			return (array[i].f);
	}
	return (NULL);
}