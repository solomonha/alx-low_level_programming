#include "lists.h"

/**
 * pop_listint - A function that deletes the head node of a listint_t
 * linked list, and returns the head node’s data (n)
 * @head: input head of singly linked list
 * Return: the  head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *ptr = (*head);

	if ((*head) == NULL)
	{
		free(*head);
		return (0);
	}
	data = (*head)->n;
	(*head) = (*head)->next;
	free(ptr);
	ptr = NULL;
	return (data);
}

