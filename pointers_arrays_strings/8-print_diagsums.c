#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - function that prints the sum
 * @a: Pointer to the first element of the matrix.
 * @size: Size of the matrix (number of rows and columns)
 *
 */
void print_diagsums(int *a, int size)
{
	int sum1 = 0, sum2 = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i];
	}

	for (i = 0; i < size; i++)
	{
		sum2 += a[i * size + (size - 1 - i)];
	}
	printf("%d, %d\n", sum1, sum2);
}
