#include "lists.h"

int string_length(const char *s);
/**
 * add_node - a function that adds a new node at the beginning of a list_t list
 * @str: input character string to add to list_t list
 * @head: input head of singly linked list to add node to
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	if (new_node->str != NULL)
	{
		new_node->len = string_length(str);
		new_node->next = (*head);
		(*head) = new_node;
	}
	else
	{
		free(new_node);
		return (NULL);
	}
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
