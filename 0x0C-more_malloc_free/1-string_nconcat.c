#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates 2 strings
 *
 * @s1: first string
 * @s2: string to add to end of of first string
 * @n: bytes to inlcude of s2
 * Return: pointer to newly allocated string concatenation
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, j, size1, size2;

	i = j = size1 = size2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[size1] != '\0')
		size1++;
	while (s2[size2] != '\0')
		size2++;
	if (n <= size2)
		size2 = n;
	ptr = (char *) malloc((size1 + size2 + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	while (i < size1)
	{
		ptr[i] = s1[i];
		i++;
	}
	while (j < size2)
	{
		ptr[i] = s2[j];
		i++;
		j++;
	}
	ptr[i] = '\0';
	return (ptr);
}
