#include "main.h"
#include <stdlib.h>

/**
*char *_strdup -  returns a pointer to a newly allocated space in memory
*@str:pointer to string
*Return: pointer to string duplicated
*/

char *_strdup(char *str)
{
	char *i;
	int n;
	int j;

	j = 0;
	n = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[n] != '\0')
	{
		n++;
	}

	i = malloc(sizeof(char) * n + 1);

	if (i == NULL)
	{
		free(i);

		return (NULL);
	}

	for (j = 0; j < n; j++)
	{
		i[j] = str[j];
	}

	return (i);
}
