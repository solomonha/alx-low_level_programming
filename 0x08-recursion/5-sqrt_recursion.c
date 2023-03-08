#include "main.h"

/**
 * sqrt_predict - predicts for the square root of p
 * @guess:guess at sqrt
 * @p: number to find sqrt of
 *
 * Return: -1 or sqrt of p
 */
int sqrt_predict(int guess, int p)
{
	if (guess * guess == p)
		return (guess);
	if (guess * guess > p)
		return (-1);
	return (sqrt_predict(guess + 1, p));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer to find sqrt of
 *
 * Return: natural square root or -1
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (sqrt_predict(1, n));
}
