#include "lists.h"

/**
 * free_list - frees memory used by list_t list
 * @head: input head of singly linked list
 *
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
