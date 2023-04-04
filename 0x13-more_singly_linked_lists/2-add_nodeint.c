#include "lists.h"

/**
 * add_nodeint - A function that adds a new node at the
 * beginning of a listint_t list
 * @head: input head of singly linked list to add node to
 * @n: input node to add to list_t list
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr = malloc(sizeof(listint_t));

	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = NULL;
	ptr->next = *head;
	*head = ptr;
	return (*head);
}
