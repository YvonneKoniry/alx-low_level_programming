#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*create array - te create an array of chars
*@size: size of unsigned int
*@c: string of characters to be inputted
*Return:Null if size = 0/ fail,else pointer to array
*/

char *create_array(unsigned int size, char c)
{
/*declaring variable and pointer*/

	unsigned int i;
	char *ptr;

/*checking if size is zero*/
	if(size == 0)
	{
		return (NULL);
	}
/*typecast the char return type*/
	ptr = (char *)malloc(size * sizeof(char));

/*return null if space to be allocated wasn't created*/
	if(ptr == NULL)
	{
		return (NULL);
	}
/*replacing all empty spaces with c*/
	for(i = 0; i < size; i++)
	{
		*(ptr + i) = c;
	}
	return (ptr);
}
	


