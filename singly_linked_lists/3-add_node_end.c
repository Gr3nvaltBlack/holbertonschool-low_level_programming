#include "lists.h"

/**
 * *add_node_end - adds new node at the end of a list_t list.
 * @head: head of list_t list.
 * @str: string to duplicate into new_node.
 * Return: the address of the new element or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *curr = *head;
	int len = 0;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	while (str[len] != '\0')
		len++;

	new_node->len = len;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (curr->next != NULL)
		curr = curr->next;
	curr->next = new_node;
	return (new_node);
}
