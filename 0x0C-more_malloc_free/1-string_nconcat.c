#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - Entry point
 *
 * @s1: string one
 * @s2: string two
 * @n: num of bytes
 *
 * Return: return a pointer to the concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	char *sconcat;

	while (s1[len1])
	{
		len1++;
	}
	while (s2[len2])
	{
		len2++;
	}
	sconcat = malloc(sizeof(char) * (len1 + n + 1));
	if (sconcat == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		sconcat[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		if (n == len2)
		{
			sconcat[len1] = s2[j];
			len1++;
		}
		else
		{
			sconcat[len1] = s2[j];
			len1++;
		}
	}
	return (sconcat);
}
