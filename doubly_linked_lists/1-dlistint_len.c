#include "lists.h"

/**
 * dlistint_len - counts the number of elements in a linked dlistint_t list.
 * @h: given dlist_t.
 * Return: number count
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t cpt = 0;

	while (h != NULL)
	{
		h = h->next;
		cpt++;
	}
	return (cpt);
}
