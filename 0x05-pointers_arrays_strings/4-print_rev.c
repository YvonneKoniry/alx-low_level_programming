#include "main.h"

/**
*print_rev -  prints a string, in reverse
*@s: char
*/

void print_rev(char *s)
{	int c = 0;

	while (*(s + c) != '\0')
	{
		c++;
	}
	while (c--)
	{
		_putchar(*(s + c));
	}
	_putchar('\n');
}
