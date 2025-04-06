#include "lists.h"

/**
 * *add_dnodeint_end - Adds new node at the end of a dlistint_t list.
 * @head: head of given dlistint_t list.
 * @n: data (integer) to add in new node.
 * Return: adress of the new element (new_node), or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node;
	dlistint_t *curr = *head;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = NULL;
	if (*head == NULL)
	{
		node->prev = NULL;
		*head = node;
	}
	else
	{
		while (curr->next != NULL)
			curr = curr->next;
		curr->next = node;
		node->prev = curr;
	}
	return (node);
}
