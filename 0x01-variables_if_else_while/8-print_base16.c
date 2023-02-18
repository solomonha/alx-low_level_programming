#include <stdio.h>
/**
 * main - a program that prints all the numbers of base 16 in lowercase
 * You can only use the putchar function
 * Return:0 (success)
 */
int main(void)
{
	int n;
	char ch;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	for  (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
