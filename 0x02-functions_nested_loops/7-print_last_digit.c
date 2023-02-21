#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @n: the variable we are taking the last digit of.
 *
 * Return: value of last digit.
 */
int print_last_digit(int n)
{
	int ld;

	if (n >= 0)
	{
		ld = n % 10;
	}
	else
	{
		ld = -(n % 10);
	}
	return (ld);
}

