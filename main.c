#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */

/** TEST FILE - CHANGE NAME FUNCTION BACK TO MAIN TO USE THIS TEST FILE */
int test(void)
{
	int len;
	int len2;

	unsigned int ui;

	/** unused variables, for now
	void *addr;
	*/

	/** Testing S - string */
	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");

	ui = (unsigned int)INT_MAX + 1024;
	/** unused variables, for now 
	addr = (void *)0x7ffe637541f0;
	*/

	/** Testing D and I + return value of function */
	printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);

	_printf("Length:[%d, %i]\n", len, len);
	_printf("Length:[%d, %i]\n", len2, len2);

	/** Testing D - negatie value */
	printf("\n");
	_printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n", -762534);

	/** Testing U - max */
	printf("\n");
	printf("Unsigned:[%u]\n", ui);
	_printf("Unsigned:[%u]\n", ui);

	/** Testing U*/
	printf("\n");
	len = printf("Unsigned:[%u]\n", 102);
	len2 = _printf("Unsigned:[%u]\n", 102);
	printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);

	/** Testing O -  */

	printf("\n");
	len = _printf("Unsigned octal:[%o]\n", ui);
	len2 = printf("Unsigned octal:[%o]\n", ui);
	printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);

	/** Testing O -  */

	printf("\n");
	len = _printf("Unsigned octal:[%o]\n", -102);
	len2 = printf("Unsigned octal:[%o]\n", -102);
	printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);

	/** Testing X -  */

	printf("\n");
	len = printf("Unsigned hexadecimal:[%x]\n", 33);
	len2 = _printf("Unsigned hexadecimal:[%x]\n", 33);
	printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);


	printf("\n");
	printf("ui = %u\n", ui);
	_printf("Unsigned hexadecimal:[%x][%X]\n", ui, ui);
	printf("Unsigned hexadecimal:[%x][%X]\n", ui, ui);

	/** Testing C - character */
	printf("\n");
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');

	/** Testing S with specifier- string + return value */
	printf("\n");
	len = _printf("String:[%s]\n", "I am a string !");
	len2 = printf("String:[%s]\n", "I am a string !");

	printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);


	/** Testing S with NULL - + return value */
	printf("\n");
	len = _printf("String:[%s]\n", NULL);
	len2 = printf("String:[%s]\n", NULL);

	printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);


	/** Testing C with NULL - + return value */
	printf("\n");
	len = _printf("Char:[%c]\n", NULL);
	len2 = printf("Char:[%c]\n", NULL);

	printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);

	/** Testing P -  excluded for now*/
	/** 
	printf("\n");
	_printf("Address:[%p]\n", addr);
	printf("Address:[%p]\n", addr);
	*/

	/** Testing %% and return value and d*/
	printf("\n");
	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	
	printf("\n");
	printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);
	_printf("Len:[%d]\n", len);
	_printf("Len:[%d]\n", len2);

	/** Testing unknown value after %*/
	printf("\n");
	len = _printf("Unknown:[%r]\n");
	len2 = printf("Unknown:[%r]\n");
	printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);

	/** Testing format = NULL */
	printf("\n");
	len = printf(NULL);
	len2 = _printf(NULL);
	printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);

	/** Testing slash */
	printf("\n");
	len = printf("Try to print a single quote \'\n");
	len2 = _printf("Try to print a single quote \'\n");
	printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);

	/** Testing b */
	printf("\n");
	len = printf("%b\n", 15);
	len2 = _printf("%b\n", 15);
	printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);

    return (0);
}
