#include "lists.h"

/**
 * free_listint_safe - a function that frees a listint_t list.
 * @h: a pointer to input head of singly linked list to print
 * Return: the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current = (*h);
	size_t index = 0;

	while (current != NULL)
	{
		listint_t *temp = current;
		current = current->next;
		free(temp);
		index++;
	}
	(*h) = NULL;
	return (index);
}
