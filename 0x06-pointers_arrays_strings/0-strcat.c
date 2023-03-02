#include "main.h"

/**
 * _strcat - A function that concatenates two strings
 * @dest: string copy to
 * @src: string copy from
 * Return: two concat strings
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
