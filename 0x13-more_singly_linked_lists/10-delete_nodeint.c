#include "lists.h"

/**
 * delete_nodeint_at_index - a function that deletes the node
 * at index index
 * @head: input head of singly linked list
 * @index: the index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = (*head);
	listint_t *previous = (*head);

	if (*head == NULL || head == NULL)
		return (-1);
	if (index == 0)
	{
		current = (*head)->next;
		free(*head);
		*head = current;
		return (1);
	}
	while (index && current->next != NULL)
	{
		previous = current;
		current = current->next;
		index--;
	}
	if (index)
		return (-1);
	previous->next = current->next;
	free(current);
	current = NULL;
	return (1);
}
