#include <stdio.h>
/**
 * main - A program that prints hexadecimal numbers using putchar
 * Return: 0 (success)
 */
int main(void)
{
	int num;
	char ch;

	for (num = 0; num <= 9; num++)
		putchar(num);
	for (ch = 'a'; ch <= 'f'; ch++)
		putchar(ch);
	putchar('\n')
	return (0);
}
