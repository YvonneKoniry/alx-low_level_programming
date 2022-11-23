#include "main.h"

/**
*char *str_concat - concatenates strings
*@s1:string 1
*@s2:string 2
Return: pointer to newly allocated space
*/

char *str_concat(char *s1, char *s2)
{
	char *i;
	int j;
	int k;

	j = 0;
	k = 0;
	
	
	for (s1[j] != '\0' && s2[k] != '\0')
	{
		i += s1[j] + s2[k];
 
			j++;
			k++;
	}
	_putchar (\0);

	int len = 0;

	while (i != '/0')
	{
		len++;
	}	i++;

	malloc(sizeof (char) * len +1);

	if (i == NULL)
		return (i[0]);


	return(i);
