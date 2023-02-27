#include "main.h"

/**
 * puts_half - a function that prints half of a string
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str: input
 * Return: half of input
 */
void puts_half(char *str)
{
	int i, j, len = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}
	j = (i / 2);
	if ((len % 2) == 1)
	{
		j = ((len + 1) / 2);
	}
	for (i = j; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar ('\n');
}
