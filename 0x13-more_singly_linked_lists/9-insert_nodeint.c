#include "lists.h"

/**
 * insert_nodeint_at_index - a function that inserts a new node
 * at a given position
 * @head: input head of singly linked list
 * @idx: the index of the list where the new node should be added.
 * Index starts at 0
 * @n: input data
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr = (*head);
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL || head == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	if (idx == 0)
	{
		(*head) = new_node;
		return (new_node);
	}
	idx--;
	while (idx)
	{
		if (ptr == NULL)
			return (NULL);
		ptr = ptr->next;
		idx--;
	}
	new_node->next = ptr->next;
	ptr->next = new_node;
	return (new_node);
}
