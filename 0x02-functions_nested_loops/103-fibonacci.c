#include <stdio.h>

/**
 * main - Prints the sum of even-valued Fibonacci sequence
 *        terms not exceeding 4000000.
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long Fib1, Fib2, sum;
	float even_sum;

	Fib1 = 0;
	Fib2 = 1;
	while (1)
	{
		sum = Fib1 + Fib2;
		if (sum > 4000000)
		{
			break;
		}
		if ((sum % 2) == 0)
		{
			even_sum += sum;
		}
		Fib1 = Fib2;
		Fib2 = sum;
	}
	printf("%.0f\n", even_sum);
	return (0);
}
