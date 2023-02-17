#include <stdio.h>
/**
 * main - a program that prints all possible different combinations
 * Numbers must be separated by ,, followed by a space
 * 01 and 10 are considered the same combination of the two digits 0 and 1
 * Return: 0 (success)
 */
int main(void)
{
	int num;
	int num2;

	for (num = '0'; num <= '9'; num++)
	{
		for (num2 = num; num2 <= '9'; num2++)
		{
			if (num2 != num)
			{
				putchar(num);
				putchar(num2);
				if (num == '8' && num2 == '9')
				{
					continue;
					putchar(',')
					putchar(' ');
				}
			}	
		}

	}
	putchar('\n');
	return (0);
}
