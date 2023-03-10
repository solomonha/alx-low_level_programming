#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - function to add positive numbers together
* @argc: argument to determine how many arguments to program are provided
*
* @argv: argument array with program name and arguments
*
* Return: (0)
*/
int main(int argc, char *argv[])
{
	int i = 1, sum = 0;

	if (argc < 1)
	{
		printf("%d\n", 0);
		return (0);
	}
	else
	{
		while (i < argc)
		{
			if (!atoi(argv[i]))
			{
				printf("%s\n", "Error");
				return (1);
			}
			else
			{
				sum += atoi(argv[i]);
			}
			i++;
		}
	}
	printf("%d\n", sum);

	return (0);
}
