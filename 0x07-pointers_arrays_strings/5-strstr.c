#include <stdio.h>
#include "main.h"

/**
 * my_strstr - Finds the first occurrence of the substring needle
 * in the string haystack.
 * @haystack: The string to search through.
 * @needle: The substring to search for.
 *
 * Return: Pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *my_strstr(char *haystack, char *needle)
{
	char *h, *n;

	while (*haystack != '\0')
	{
		h = haystack;
		n = needle;
		while (*n != '\0' && *n == *h)
		{
			n++;
			h++;
		}

		if (*n == '\0')
		{
			return (haystack);
		}

		haystack++;
	}

	return (NULL);
}

