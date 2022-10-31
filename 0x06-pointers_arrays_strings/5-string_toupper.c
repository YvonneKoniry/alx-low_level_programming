#include "main.h"

/**
*string_toupper - changes all lowercase letters of a string to uppercase
*@uc:string to be manipulated
*/

 char *string_toupper(char *uc)
{
	int i = 0;

	while (*(uc + i) != '\0')
	{
		if (*(uc + i) >= 'a' && *(uc + i) <= 'z')
		{
			*(uc + i) = *(uc + i) - 32;
		}
		i++;
	}
	return (uc);
}
