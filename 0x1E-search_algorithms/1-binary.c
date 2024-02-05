#include "search_algos.h"

/**
* binary_search - Looks for the value using binary search
*
* @array: the array to be searched
* @size: the size of the array
* @value: the value to be searched for
*
* Return: returns the index of the value if found else -1
*/

int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1, i = 0, mid;

	if (!array)
		return (-1);

	while (left <= right)
	{
		mid = left + (right - left) / 2;
		i = left;

		printf("Searching in array: ");
		while (i <= right)
		{
			if (i != left)
				printf(", %d", array[i]);
			else
				printf("%d", array[i]);
			i++;
		}
		printf("\n");

		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (-1);
}
