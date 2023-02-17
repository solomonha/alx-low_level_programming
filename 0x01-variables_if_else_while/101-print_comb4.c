#include <stdio.h>
/**
 * main - a program that prints all possible 3 combinations
 * Numbers must be separated by ,, followed by a space
 * 01 and 10 are considered the same combination of the two digits 0 and 1
 * Return: 0 (success)
 */
int main(void)
{
	int num, num2, k;

	for (num = '0'; num <= '9'; num++)
	{
		for (num2 = num; num2 <= '9'; num2++)
		{
			for (k = num2; k <= '9'; k++)
			{
				if (num2 != num && k != num2)
				{
					putchar(num);
					putchar(num2);
					putchar(k);
					if (num == '8' && num2 == '9')
					{
						continue;
					}
				putchar(',');
				putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);

}
