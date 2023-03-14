#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - return pointer to new allocated space with copy of string
 * @str: a string to be duplicated
 * Return: copied string or error
 */
char *_strdup(char *str)
{
	unsigned int size, i;
	char *ptr;

	i = 0;
	size = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[size])
	{
		size++;
	}
	ptr = (char *) malloc((size * sizeof(char) + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	while ((ptr[i] = str[i]) != '\0')
	{
		i++;
	}
	return (ptr);
}
