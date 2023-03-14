#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates 2 strings
 *
 * @s1: first string
 * @s2: string to add to end of of first string
 *
 * Return: pointer to newly allocated string concatenation
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	unsigned int i, j, n, m;

	i = j = n = m = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	j++;
	ptr = (char *) malloc((i + j) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	while (s1[n] != '\0')
	{
		ptr[n] = s1[n];
		n++;
	}
	while (s2[m] != '\0')
	{
		ptr[n] = s2[m];
		m++;
		n++;
	}
	ptr[n] = '\0';
	return (ptr);
}

