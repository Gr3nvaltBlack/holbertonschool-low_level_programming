#include "lists.h"

/**
 * print_dlistint - prints all the elelemtns of a dlistint_t list.
 * @h: given dlistint_t.
 * Return: number count.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t cpt = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		cpt++;
	}
	return (cpt);
}
