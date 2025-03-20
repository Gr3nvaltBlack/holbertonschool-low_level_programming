#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - function that executes a function given as a parameter
 * @array: integer array
 * @size: the length of the array
 * @action: function pointer who execute
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (; i < size; i++)
	{
		action(array[i]);
	}
}
