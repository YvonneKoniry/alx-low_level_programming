#include "main.h"

/**
*_strncpy - copies a string
*@dest: pointer to destination string
*@src:pointer to source string
*@n:size of second string
*Return: dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		*(dest + i) = *(src + i);
	for ( ; i < n; i++)
		*(dest + i) = '\0';


	return (dest);
}
