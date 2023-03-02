#include "main.h"

/**
 * _strncat - a function that concatenates two strings.
 * @dest: string copy to
 * @src: string copy from
 * @n: n bytes
 * Return: Always 0 (Success)
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; j < n; j++)
	{
		dest[i + j] = src[j];
		if (src[j] == '\0')
			j = n;
	}
	return (dest);
}
