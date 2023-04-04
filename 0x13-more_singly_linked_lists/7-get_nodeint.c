#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns the nth node of
 * a listint_t linked list
 * @head: input head of singly linked list
 * @index: the index of the node, starting at 0
 * Return: nth node of a listint_t
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *nth_node = head;
	unsigned int n;

	for (n = 0; n <= index; n++)
	{
		if (nth_node == NULL)
			return (NULL);
		if (n != index)
		{
			nth_node = nth_node->next;
		}
	}
	return (nth_node);
}
