#include <stdio.h>
#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes
 *
 * @s: pointer to the string to search
 *
 * @accept: pointer to the set of bytes to search for
 *
 * Return: pointer to the byte in s that matches one of the bytes in accept,
 *         or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	char *i, *j;

	for (i = s; *i != '\0'; i++)
	{
		for (j = accept; *j != '\0'; j++)
		{
			if (*i == *j)
			{
				return (i);
			}
		}
	}
	return (NULL);
}
