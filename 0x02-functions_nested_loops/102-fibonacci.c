#include <stdio.h>

/**
 * main - Prints first 50 Fibonacci numbers, starting with 1 and 2,
 *                         separated by comma, followed by a space
 * Return: 0(success).
 */
int main(void)
{
	int count;
	unsigned long Fib1, Fib2, sum;

	Fib1 = 0;
	Fib2 = 1;
	for (count = 0; count < 50; count++)
	{
		sum = Fib1 + Fib2;
		printf("%lu", sum);
		Fib1 = Fib2;
		Fib2 = sum;
		if (count == 49)
		{
			printf("\n");
		}
		else
		{
			printf(", ");
		}
	}
	return (0);
}
