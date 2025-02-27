#include "main.h"

/**
 * swap_int - function that swaps the values of two integers
 *@a: pointer to swap with the second value
 *@b: pointer to swap with the first value
 */
void swap_int(int *a, int *b)
{
	int point;

	point = *b;
	*b = *a;
	*a = point;
}
