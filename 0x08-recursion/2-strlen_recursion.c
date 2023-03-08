#include "main.h"

/**
 * _strlen_recursion - a function that returns the length of a string.
 * @s: input string
 * Return: 0 (success)
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}

