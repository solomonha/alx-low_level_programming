#include "lists.h"

/**
 * free_listint - A function that frees a listint_t list
 * @head: input head of singly linked list
 *
 * Return: 0(always)
 */
void free_listint(listint_t *head)
{
	listint_t *temp = head;

	while (temp != NULL)
	{
		temp = temp->next;
		free(head);
		head = temp;
	}
}
