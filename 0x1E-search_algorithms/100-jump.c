#include "search_algos.h"
#include <math.h>

size_t min(size_t x, size_t y);

/**
* jump_search - Searches for a value in a sorted array using Jump ALgo
* @array: The array to be searched
* @size: the size of the array
* @value: the value to be checked
* Return: returns the index of value if found else -1
*/

int jump_search(int *array, size_t size, int value)
{
	size_t a = 0, b = sqrt(size);

	if (!array)
		return (-1);

	while (array[min(b, size) - 1] < value)
	{
		a = b;
		b += sqrt(size);
		printf("Value checked array[%ld] = [%d]\n", min(b, size) - 1,
		 array[min(b, size) - 1]);
		if (a >= size)
			return (-1);
	}

	printf("Found between indexes [%ld] and [%ld]\n", a, b);
	while (array[a] < value)
	{
		a += 1;
		printf("Value checked array[%ld] = [%d]\n", a, array[a]);
		if (a == min(b, size))
			return (-1);
	}

	if (array[a] == value)
	{
		return (a);
	}
	return (-1);
}

/**
* min - checks two unsigned ints
* @x: size_t var
* @y: size_t var2
* Return: the minimum
*/

size_t min(size_t x, size_t y)
{
	return ((x < y) ? (x) : (y));
}
