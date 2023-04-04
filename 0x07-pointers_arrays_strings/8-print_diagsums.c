#include <stdio.h>
#include "main.h"

/**
 * print_diag_sum - Print the sum of the diagonals of a square matrix
 * @matrix: The square matrix
 * @size: The size of the square matrix
 */
void print_diag_sum(int *matrix, int size)
{
    int i, sum1 = 0, sum2 = 0;

    for (i = 0; i < size * size; i += size + 1)
    {
        sum1 += matrix[i];
    }

    for (i = size - 1; i < size * size - 1; i += size - 1)
    {
        sum2 += matrix[i];
    }

    printf("%d, %d\n", sum1, sum2);
}
