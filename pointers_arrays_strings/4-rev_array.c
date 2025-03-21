#include "main.h"

/**
 * reverse_array -  function that reverses the content of an array of integers
 * @a: pointer to the first character of the array
 * @n: number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = tmp;
	}
}
