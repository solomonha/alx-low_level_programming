#include <math.h>
#include <stdio.h>
/**
 * main - finds and prints the largest prime factor of:
 * the number 612852475143, followed by a new line
 * Return:0 always (success)
 */

int main(void)
{
	long int i, n, max;

	max = -1;
	n = 612852475143;
	while (n % 2 == 0)
	{
		max = 2;
		n /= 2;
	}
	for (i = 3; i <= sqrt(n); i = i + 2)
	{
		while (n % i == 0)
		{
			max = i;
			n /= i;
		}
	}
	if (n > 2)
	{
		max = n;
	}
	printf("%ld ", max);
	printf("\n");
	return (0);
}
