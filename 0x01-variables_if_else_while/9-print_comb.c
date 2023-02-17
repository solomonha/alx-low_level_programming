#include <stdio.h>
/**
 * main - A program that prints decimal numbers separeted by comma and space
 * Return:0 (success)
 */
int main(void)
{
	int num;
	char comma;
	char dollar;

	comma = ',';
	dollar = '$';
	for (num = '0'; num <= '9'; num++)
		putchar(num);
		putchar(comma);
		putchar(' ');
	putchar(dollar);
	return (0);
}
