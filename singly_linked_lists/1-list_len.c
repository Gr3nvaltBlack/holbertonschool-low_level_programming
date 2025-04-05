#include "lists.h"

/**
 * list_len - counts the number of elements in a linked list_t list
 * @h: list_t list
 * Return: number of elements (index)
 */
size_t list_len(const list_t *h)
{
	size_t compt = 0;

	while (h != NULL)
	{
		h = h->next;
		compt++;
	}
	return (compt);
}
