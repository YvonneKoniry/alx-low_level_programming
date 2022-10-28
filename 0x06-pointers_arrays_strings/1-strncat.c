#include "main.h"

/**
*strcat - concatenates two strings while using n bytes
*dest:string
*src:string getting appended
*n:number of bytes allocated
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
	for (b = 0; b < n; b++)
	{
		dest[a] += dest[a] + src[b];
			dest[b] += '\0';
			a = n;
	}
	return (dest);
}
