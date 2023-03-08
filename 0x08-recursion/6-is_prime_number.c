#include "main.h"

int checkPrime(int n, int j);
/**
 * is_prime_number - determines if number is a prime number
 * @n: input number to determine if prime
 *
 * Return: 1 if prime and 0 if not prime
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (checkPrime(n, n / 2) > 0)
	{
		return (1);
	}
	return (0);

}
/**
 * checkPrime - checks for prime
 * @n: input to check
 * @j: n / 2, then passes to j - 1, checks if greater than 0
 * Return: check prime
 */
int checkPrime(int n, int j)
{
	if (j == 1)
	{
		return (1);
	}
	else if (n % j == 0)
	{
		return (0);
	}
	else
	{
		return (checkPrime(n, j - 1));
	}
}
