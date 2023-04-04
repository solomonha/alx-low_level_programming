#include "lists.h"

/**
 * add_nodeint_end - A function that adds a new node at
 * the end of a listint_t list
 * @head: input head of singly linked list to add node to
 * @n: input data to add to list_t list
 * Return: pointer to newly added element of list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *temp;

	temp = (*head);
	ptr = malloc(sizeof(listint_t));

	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = NULL;
	if (temp == NULL)
	{
		(*head) = ptr;
		return (*head);
	}
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = ptr;
	return (*head);
}
