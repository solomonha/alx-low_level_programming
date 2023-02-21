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

	ld = n % 10;
	if (n < 0)
	{
		ld = -(n % 10);
	}
	_putchar(ld + '0');
	return (ld);
}

