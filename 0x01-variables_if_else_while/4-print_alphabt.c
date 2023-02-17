#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - A program that prints lowercase except e and q
 * Return: 0 (success)
 */
int main(void)
{
	char ch, e, q;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
	if (ch != q && ch != e)
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
