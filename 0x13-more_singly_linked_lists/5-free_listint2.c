#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list.
 * @head: input head of singly linked list
 *
 * Return: 0(always)
 */
void free_listint2(listint_t **head)
{
	listint_t *temp = (*head);

	if (head == NULL || *head == NULL)
		return;
	while (temp != NULL)
	{
		temp = temp->next;
		free((*head));
		(*head) = temp;
	}
	head = NULL;
}
