#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size of each element
 * Return: void pointer tab
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	void *tab;

	if (nmemb == 0 || size == 0)
		return (NULL);

	tab = malloc(nmemb * size);
	if (tab == NULL)
		return (NULL);
	while (i < (nmemb * size))
	{
		((unsigned char *) tab)[i] = 0;
		i++;
	}
	return (tab);
}
