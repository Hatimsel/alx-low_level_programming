#include "search_algos.h"

/**
* linear_search - Searches for a value in an array of integers
*
* @array: A pointer to the array to be searched
* @size: The size of the array
* @value: The value to be searched for
*
* Return: returns the first index where value is located else -1
*/

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
