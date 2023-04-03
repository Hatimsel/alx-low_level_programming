#include "main.h"

/**
 * _memcpy - Entry point
 *
 * @dest: destination
 *
 * @src: source memory address
 *
 * @n: number of bytes
 *
 * Return: Returns destination
 */


char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
