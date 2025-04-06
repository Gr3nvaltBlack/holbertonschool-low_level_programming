#include "lists.h"

/**
 * free_dlistint - frees given dlistint_t list.
 *@head: given dlistin_t list.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tpr;

	while (head != NULL)
	{
		tpr = head->next;
		free(head);
		head = tpr;
	}
}
