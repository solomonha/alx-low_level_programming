#include "lists.h"

/**
 * reverse_listint - a function that reverses a listint_t linked list
 * @head: input head of singly linked list
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous = NULL;
	listint_t *ptr = NULL;

	if ((*head) == NULL || head == NULL)
		return (NULL);
	while ((*head) != NULL)
	{
		ptr = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = ptr;
	}
	*head = previous;
	return (*head);

}

