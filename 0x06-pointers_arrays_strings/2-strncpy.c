
#include "main.h"

/**
 * _strncpy - Copies at most an inputted number
 * of bytes.
 * @dest: variable storing the string copy.
 * @src: source string.
 * @n: The maximum number of bytes.
 * Return: A pointer to dest.
 *
 */

char *_strncpy(char *dest, char *src, int n)

{

	int i = 0;
	int j = 0;

	while (src[i++])
	j++;

	for (i = 0; src[i] && i < n; i++)
	dest[i] = src[i];

	for (i = j; i < n; i++)
	dest[i] = '\0';

	return (dest);

}
