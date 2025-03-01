#include "main.h"
#include <stdio.h>

/**
 * print_array - function that prints n elements
 *@a: pointer that points to the first element of the array
 *@n: the number of elements
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		if (i == n - 1)
		{
			printf("%d ", *(a + i));
		}
		else
		{
			printf("%d", *(a + i));
			putchar(44);
			putchar(32);
		}
		i++;
	}
	putchar(10);
}
