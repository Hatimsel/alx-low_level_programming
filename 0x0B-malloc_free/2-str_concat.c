#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - Entry point
 *
 * @s1: string num 1
 * @s2: string number two
 *
 * Return: return a pointer to the concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	int i, j;
	int len1 = 0;
	int len2 = 0;
	char *scat;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[len1])
	{
		len1++;
	}
	while (s2[len2])
	{
		len2++;
	}
	scat = malloc(sizeof(char) *(len1 + len2 + 1));
	if (scat == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		scat[i] = s1[i];
	}
	while (s2[j] != '\0')
	{
		scat[len1] = s2[j];
		len1++;
		j++;
	}
	return (scat);
	free(scat);

}
