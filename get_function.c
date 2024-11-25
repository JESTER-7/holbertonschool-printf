#include "main.h"
/**
 * 
 */
int (*get_function(char *s))(va_list)
{
	print array[] = {
		{"c", character},
		{"s", string},
		{"%", percent},
		{NULL, NULL}
	};
	int i = 0;

	if (array[i].op != NULL && *(array[i].op) == *s)
			return (array[i].f);
	return (NULL);
}