#include "main.h"

/**
 *  _strncat - Concatenates two strings.
 *
 *  @dest: The destination string.
 *
 *  @src: The source string.
 *
 *  @n: The number of bytes from src to be added to dest.
 *
 *  Return: A pointer to dest.
 */

char *_strncat(char *dest, char *src, int n)

{

	int i = 0, length = 0;

	while (dest[i++])
	length++;
	for (i = 0; src[i] && i < n; i++)
	dest[length++] = src[i];
	return (dest);
}
