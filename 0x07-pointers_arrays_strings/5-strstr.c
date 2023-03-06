#include "main.h"
#include <stdio.h>

/**
 * _strstr - locates a substring
* @haystack: the longer string to search
* @needle: the substring to search for
* Return: a pointer to the beginning of the located substring, or NULL if
* the substring is not found.
*/
char *_strstr(char *haystack, char *needle)
{
	int n, s = 0;

	while (needle[s] != '\0')
	{
		s++;
	}
	while (*haystack)
	{
		for (n = 0; needle[n]; n++)
		{
			if (haystack[n] != needle[n])
			{
				break;
			}
		}
		if (n != s)
			haystack++;
		else
			return (haystack);
	}
	return (NULL);
}
