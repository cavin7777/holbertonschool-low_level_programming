#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Print the sum of the two diagonals of the square matrix
 * @a: Pointer to the first element of the 2D square matrix
 * @size: The number of rows (and columns) of the square matrix
 */
void print_diagsums(int *a, int size)
{
	int i; /* Loop counter */
	int sum1 = 0; /* Sum of the primary diagonal */
	int sum2 = 0; /* Sum of the secondary diagonal */
	/* 
	 * Loop through each row of the matrix.
     * Since the matrix is square, we loop 'size' times.
     */
	for (i = 0; i < size; i++)
	{
	/*
	 * To access the primary diagonal (from top-left to bottom-right):
	 * element at a[0][0], a[1][1], a[2][2], ..., a[size-1][size-1]
	 * Formula in 1D: a[i * size + i]
    */
	sum1 += a[i * size + i];
	/*
	 * To access the secondary diagonal (from top-right to bottom-left):
	 * element at a[0][size-1], a[1][size-2], ..., a[size-1][0]
	 * Formula in 1D: a[i * size + (size - 1 - i)]
	 */
	sum2 += a[i * size + (size - 1 - i)];
	}
/* Print the two sums separated by a comma */
	printf("%d, %d\n", sum1, sum2);
}
