#include <stdio.h>
/**
 * main - A program that prints decimal numbers separeted by comma and space
 * Return:0 (success)
 */
int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{ 
		putchar(num);
		if (num < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
