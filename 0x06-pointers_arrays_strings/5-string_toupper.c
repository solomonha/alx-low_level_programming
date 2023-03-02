#include "main.h"

/**
 * string_toupper - a function that changes all lower of a string to upper
 * @s: input string
 * Return: capitialized string
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			s[i] = s[i] - 32;
		}
		i++;
	}
	return (s);
}
