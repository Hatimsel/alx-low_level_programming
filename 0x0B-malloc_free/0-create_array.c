#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars
 *
 * @size: size of array
 * @c: array of characters
 *
 * Return: returns 0 if it is null otherwise s
*/

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr = malloc(sizeof(c) * size);

	if (size == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
	free(arr);
}
