#include "lists.h"

/**
 * sum_listint - a function that returns the sum of all
 * the data (n) of a listint_t linked list
 * @head: input head of singly linked list
 *
 * Return: sum of all the data (n)
 */
int sum_listint(listint_t *head)
{
	listint_t *ptr = head;
	int sum = 0;

	while (ptr != NULL)
	{
		if (ptr == NULL)
			return (0);
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
