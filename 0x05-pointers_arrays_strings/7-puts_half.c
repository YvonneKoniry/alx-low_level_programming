#include "main.h"

/**
*puts_half -  prints half of a string
*@str: string
*@*str:pointer to string
*/

void puts_half(char *str)

{
	int i = 0;

	while (*(str + i) != '\0')
	{
		i++;
	}

	if (!(i % 2))
		i /= 2;

	else
		i = (i + 1) / 2;

	while (*(str + i) != 0)
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}