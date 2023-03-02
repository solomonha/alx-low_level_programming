#include "main.h"
/**
 * leet - a function that encodes a string into 1337
 * ONE if, TWO loops only
 * @s: input  string
 * Return: Always 0 (Success)
 */
char *leet(char *s)
{
	int i, j;
	int letters[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int replaced[] = {'4', '3', '0', '7', '1'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
			if (s[i] == letters[j])
			{
				s[i] = replaced[j / 2];
				j = 9;
			}
	}
	return (s);
}
