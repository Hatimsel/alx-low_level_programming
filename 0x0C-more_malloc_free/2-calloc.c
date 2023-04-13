#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Entry point
 *
 * @nmemb: number of elements
 * @size: the size of the array
 *
 * Return: returns a pointer to the array's memory address
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *clc = malloc(nmemb * size);

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	if (clc == 0)
	{
		return (NULL);
	}
	return (clc);
}
