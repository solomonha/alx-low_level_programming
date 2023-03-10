#include "main.h"
#include <stdio.h>

/**
* main - function to print name of function followed by newline
* @argc: argument to determine how many arguments to program are provided
*
* @argv: unused argument
*
* Return: (0)
*/
int main(int argc, __attribute__((unused)) char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	}
	printf("%d\n", i - 1);
	return (0);
}
