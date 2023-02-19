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
		for (j = 0; j <= 9; j++)
			{
			for (k = 0; k <= 9; k++)
				{
				for (n = 0; n <= 9; n++)
					printf("%d%d", i, j);
					printf(" ");
					printf("%d%d", k, n);
				}
			}
		}
	printf(",");
	return (0);
}
