#include "lists.h"

/**
 * size_t - a function that prints all the elements of a list_t list
 * @h: input head of singly linked list to print
 * Retrun: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t node = 0;

	while (h != NULL)
	{
		node++;
		if (h->str = NULL)
		{
			printf("[0] (nil)");
		}
		else
			printf("[lu] %s\n", h->len, h->str);
		h = h->next;
	}
}
