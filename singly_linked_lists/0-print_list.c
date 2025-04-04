#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: list_t list.
 * Return: The number of nodes.
 */
size_t print_list(const list_t *h)
{
	size_t compt = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		compt++;
		h = h->next;
	}
	return (compt);
}
