#include "main.h"

/**
*_strcat - concatenates two strings
*@dest:string
*@src:string
*Return:void
*/

char *_strcat(char *dest, char *src)
{
	int a;
	int b;

	 a = 0;
	while (dest[a] != '\0')
	{
		a++;

	}

	b = 0;
	while (src[b] != '\0')
	{
		dest[a] += dest[a] + src[b];
		a++;
		b++;
	}

	dest[a] += '\0';

	return (dest);
}
