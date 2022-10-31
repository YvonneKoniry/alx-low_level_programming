#include "main.h"

/**
*_strcmp -compare pointers to two strings
*@s1: pointer to string 1
*@s2:pointer to string 2
*Return: difference between two strings
*/

int _strcmp(char *s1, char *s2)
{
	int i, j = 0;
	

	for ((s1[i] != '\0' && s2[j] != '\0') && (s1[i]==s[j])
	{
		i++;
		j++;
	}
	return (s1[i] - s2[j]);
}
