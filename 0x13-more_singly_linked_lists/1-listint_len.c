#include "lists.h"

/**
 * listint_len - a function that returns the number of elements
 * in a linked listint_t list
 * @h: input head of singly linked list
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}

