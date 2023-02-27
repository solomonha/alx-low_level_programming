#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: char input
 * Return: length of the input string
 */
int _strlen(char *s)
{
	int i = 1, len = 0;
	char ptr = s[0];

	while  (ptr != '\0')
	{
		len++;
		ptr = s[i++];
	}
	return (len);
}
