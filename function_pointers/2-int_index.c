#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: array of integers
 * @size: The number of elements in the array
 * @cmp: pointer to function to compare
 * Return: The index of the element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
