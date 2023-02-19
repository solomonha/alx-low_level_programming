#include <stdio.h>
/**
 * main - a program that prints combinations of two two-digit numbers
 * The numbers should range from 0 to 99
 * The two numbers should be separated by a space
 * Return: 0 (success)
 */
int main(void)
{
	int i, j, k, n;

	for (i = 0; i <= 9; i++)
		{
		for (j = i; j <= 9; j++)
			{
			for (k = j; k <= 9; k++)
				{
				for (n = k; n <= 9; n++)
					printf("%d%d", i, j);
					printf(" ");
					printf("%d%d", k, n);
				}
			}
		}
	printf(",");
	return (0);
}
