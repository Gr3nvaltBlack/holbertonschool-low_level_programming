#include "lists.h"

/**
 * *insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: Given dlistint_t list.
 * @idx: Given index.
 * @n: Data (integer) for new node.
 * Return: address of the new_node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node, *curr = *h;
	unsigned int i = 0;

	if (idx == 0)
		return (add_dnodeint(h, n));
	while (curr != NULL && i < idx)
	{
		curr = curr->next;
		i++;
	}
	if (curr == NULL && i < idx)
		return (NULL);

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;

	if (curr == NULL)
	{
		node->prev = *h;
		node->next = NULL;
		(*h)->next = node;
	}
	else
	{
		node->next = curr;
		node->prev = curr->prev;
		curr->prev->next = node;
		curr->prev = node;
	}
	return (node);
}
