#include <stdio.h>
/**
 * main - prints the numbers from 1 to 100
 * multiples of three print Fizz
 * multiples of five print Buzz
 * multiples of both three and five print FizzBuzz
 * You are allowed to use the standard library
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	char f[] = "Fizz";
	char b[] = "Buzz";
	char fb[] = "FizzBuzz";

	for (n = 1; n <= 100; n++)
	{
		if (n == 100)
			printf("%s", b);
		else if ((n % 3 == 0) && (n % 5 == 0))
			printf("%s", fb);
		else if ((n % 3) == 0)
			printf("%s", f);
		else if ((n % 5) == 0)
			printf("%s", b);
		else
			printf("%d", n);
		printf(" ");
	}
	printf("\n");
	return (0);
}
