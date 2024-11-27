#include "main.h"

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
