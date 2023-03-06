#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: segment to return bytes from
 * @accept: the bytes to include
 * Return: the number of bytes in the initial segment of @s which consist only
 * of bytes from @accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, len, c;

	len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		c = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				len++;
				c = 1;
			}
		}
		if (c == 0)
		{
			return (len);
		}
	}
	return (len);
}
