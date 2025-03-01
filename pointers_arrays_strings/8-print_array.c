#include "main.h"
#include <stdio.h>

/**
 * print_array - function that prints n elements
 *@a: pointer that points to the first element of the array
 *@n: the number of elements
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	putchar(10);
}
