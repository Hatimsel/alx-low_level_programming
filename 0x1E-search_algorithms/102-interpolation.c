#include "search_algos.h"

/**
* interpolation_search - Looks for a value in a sorted array
*
* @array: the array to search in
* @size: the array's size
* @value: the value to be checked
*
* Return: returns the index of value if found else -1
*/

int interpolation_search(int *array, size_t size, int value)
{
	int low = 0, high = size - 1, index;

	if (!array)
		return (-1);

	while (low <= high && value >= array[low] && value <= array[high])
	{
		index = low + ((double)(high - low) / (array[high] - array[low])) *
			(value - array[low]);

		if (array[index] == value)
		{
			printf("Value checked array[%d] = [%d]\n", index, array[index]);
			return (index);
		}

		if (array[index] < value)
		{
			printf("Value checked array[%d] = [%d]\n", index, array[index]);
			low = index + 1;
		}
		else
			high = index - 1;
	}

	printf("Value checked array[%d] is out of range\n", index + 648);
	return (-1);
}
