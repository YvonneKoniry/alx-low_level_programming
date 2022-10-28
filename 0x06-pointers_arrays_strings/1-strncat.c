#include "main.h"

/**
*_strncat - concatenates two strings while using n bytes
*@dest:string
*@src:string getting appended
*@n: number of bytes allocated
*Return:dest
*/

char *_strncat(char *dest, char *src, int n)
{

	int a;
	int b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}

	b = 0;

	while (b < n)
	{
		dest[a] += dest[a] + src[b];
		a++;
		b++;
			dest[a] += '\0';
	}
	return (dest);
}
