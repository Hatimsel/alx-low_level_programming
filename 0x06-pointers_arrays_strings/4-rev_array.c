#include "main.h"

/**
 * reverse_array - Reverses the array elements.
 *
 * @a: The array of int.
 * @n: The elements in the array.
 *
 */

void reverse_array(int *a, int n)
{
	int tmp;
	int i;

	for (i = n - 1; i >= n / 2; i--)
	{
	tmp = a[n - 1 - i];
	a[n - 1 - i] = a[i];
	a[i] = tmp;
	}
}
