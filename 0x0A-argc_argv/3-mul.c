#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* main - function to multiply two arguments to program
* @argc: argument to determine how many arguments to program are provided
*
* @argv: argument array with program name and arguments
*
* Return: (0)
*/
int main(int argc, char *argv[])
{
	int i = 1, mul = 1;

	if (argc == 3)
	{
		while (i < argc)
		{
			mul *= atoi(argv[i]);
			i++;
		}
		printf("%d\n", mul);
		return (0);
	}
	else
	{
		printf("%s\n", "Error");
		return (1);
	}
}
