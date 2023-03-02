#include "main.h"
/**
 * cap_string - a function that capitalizes all words of a string
 * @s: input string
 * Return: caps on first letter of a separator
 */
char *cap_string(char *s)
{
	int i, j, diff = 32;
	int separators[] = {',', ';', '.', '?', '"',
			    '(', ')', '{', '}', ' ', '\n', '\t'};

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			s[i] -= diff;
		}
		diff = 0;

		for (j = 0; j <= 12; j++)
		{
			if (s[i] == separators[j])
			{
				j = 12;
				diff = 32;
			}
		}
	}
	return (s);
}
