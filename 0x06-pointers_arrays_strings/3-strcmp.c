#include "main.h"

/**
*_strcmp -compare pointers to two strings
*@s1: pointer to string 1
*@s2:pointer to string 2
*Return: difference between two strings
*/

int _strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	if (*s1 == *s2)
	{
		return (0);
	}
	else
	{
	return (*s1 - *s2);
	}
}
