#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - A program that prints lowercase characters
 * Return: 0 (success)
 */
int main(void)
{
	char ch;

	for  (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}	
		putchar('\n');
	
	return (0);
}
