#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list.
 * @head: input head of singly linked list
 *
 * Return: 0(always)
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return;
	while ((*head) != NULL)
	{
		temp = (*head);
		*head = (*head)->next;
		free(temp);
	}
	head = NULL;
}
