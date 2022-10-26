#include "main.h"

/**
*rev_string -  reverses a string
*@s: pointer
*/

void rev_string(char *s)
{
	int i, j;
	int a = 0;

	while (*(s + a) != '\0')
	{
		a++;
	}

	a--;
	i = 0;
	while (a > i)
	{
		j = s[i];
		s[i] = s[a];
		s[a] = j;

		i++;
		a--;
	}
}
