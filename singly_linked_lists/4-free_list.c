#include "lists.h"

/**
 * free_list - frees a malloced list_t list.
 * @head: head of list_t list.
 */
void free_list(list_t *head)
{
	list_t *tpr;

	while (head != NULL)
	{
		tpr = head->next;
		free(head->str);
		free(head);
		head = tpr;
	}
}
