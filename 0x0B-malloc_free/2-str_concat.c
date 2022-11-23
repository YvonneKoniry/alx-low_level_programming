#include "main.h"
#include <stdlib.h>

/**
* str_concat - concatenates strings
* @s1:string 1
*@s2:string 2
*Return: pointer to newly allocated space
*/

char *str_concat(char *s1, char *s2)
{
	char *i;
	int j, k, m;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	j = 0;
	k = 0;

	while (s1[j] != '\0')
		j++;
	while (s2[k] != '\0')
		k++;

	i = malloc(sizeof(char) * (j + k) + 1);
	if (i == NULL)
	{
		free(i);
		return (NULL);
	}
	for (m = 0; s1[m] != '\0'; m++)
	{
		i[m] = s1[m];
	}
	j = 0;
	while (s2[j] != '\0')
	{
		i[m] = s2[j];
		m++;
		j++;
	}
	return (i);
}
