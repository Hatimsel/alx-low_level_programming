#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Entry point
 *
 * @str: string to be copied
 *
 * Return: returns cpy
 */

char *_strdup(char *str)
{
	int len;
	int i;
	char *cpy;

	if (str == NULL)
	{
		return (NULL);
	}

	len = 0;
	while (str[len])
	{
		len++;
	}

	cpy = malloc(sizeof(char) * (len + 1));
	if (cpy == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= len; i++)
	{
		cpy[i] = str[i];
	}

	return (cpy);
	free(cpy);
}
