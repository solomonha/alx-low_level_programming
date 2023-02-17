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
		putchar(',');
		putchar(' ');
	}
	putchar('$');
	return (0);
}
