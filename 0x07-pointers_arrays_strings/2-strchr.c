#include <stdio.h>
#include "main.h"


/**
 * _strchr - Entry Point
 *
 * @s: string to look in
 *
 * @c: character to look for
 *
 * Return: returns s+i or NULL
 */

char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	while (s[i] >= '\0')
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		i++;
	}
	return (NULL);
}
