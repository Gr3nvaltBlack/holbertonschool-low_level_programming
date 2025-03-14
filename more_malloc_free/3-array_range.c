#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers
 * @min: First number in the array
 * @max: Largest number in the array
 * Return: pointer to new array
 */
int *array_range(int min, int max)
{
	int *tab, i = 0;

	if (min > max)
		return (NULL);

	tab = malloc((max - min + 1) * sizeof(int));
	if (tab == NULL)
		return (NULL);
	while (min <= max)
	{
		tab[i] = min;
		min++;
		i++;
	}

	return (tab);
}
