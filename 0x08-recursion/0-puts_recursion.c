#include "main.h"

/**
*_puts_recursion - prints a string followed by a newline
*@s: pointer to string
*Return:0
*/

void _puts_recursion(char *s)
{
		if (*s)

		{
			_putchar(*s);
		}
		else
			_putchar('\n');
}
