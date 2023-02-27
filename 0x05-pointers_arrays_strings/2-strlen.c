#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: char input
 * Return: length of the input string
 */
int _strlen(char *s)
{
	int i, len = 0;
	char ptr = s[0];

	for (i = 0; ptr != '\0'; ++i)
	{
		++len;
		ptr = s[++i];
	}
	return (len);
}
