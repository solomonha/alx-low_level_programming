#include "main.h"

/**
 * _isalpha - checks if c is lowercase or uppercase.
 * @c: the char to check.
 *
 * Return: 1 if c is alphabetic. Else 0.
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}
