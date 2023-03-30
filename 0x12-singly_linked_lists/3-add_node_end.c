#include "lists.h"

int string_length(const char *s);

/**
 * add_node_end - add element as a new node at the end of list_t list
 * @head: input head of singly linked list to add node to
 *
 * @str: input character string to add to list_t list
 *
 * Return: pointer to newly added element of list
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node =  malloc(sizeof(list_t));
	list_t *temp = (*head);

	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = string_length(str);
	new_node->next = NULL;
	if (temp == NULL)
	{
		(*head) = new_node;
		return (*head);
	}
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new_node;
	return (*head);
}

/**
 * string_length - determines the length of a string
 * @s: input character string to determine length of
 *
 * Return: integer count of length
 */

int string_length(const char *s)
{
	int i = 0;

	for (i = 0; s[i]; i++)
		continue;
	return (i);
}
