#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: input head of singly linked list to print
 * Return: the number of nodes
 *
 * Description: Traversing single linked list
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	if (h == NULL)
	{
		printf("(nill)\n");
	}
	while (h != NULL)
	{
		count++;
		printf("%u\n", h->n);
		h = h->next;
	}
	return (count);

}
