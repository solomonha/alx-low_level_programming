#include "main.h"

/**
 * factorial - a function that returns the factorial of a given number
 * @n: input integer to return factorial of
 * Return: 0 (success)
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}

}
