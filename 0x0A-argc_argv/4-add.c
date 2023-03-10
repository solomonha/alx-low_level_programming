#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

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
	int i, j, sum;

	sum = 0;

	if (argc <= 1)
	{
		printf("%d\n", 0);
		return (0);
	}
	else
	{
		for (i = 1; i <= (argc - 1); i++)
		{
			for (j = 0; argv[i][j]; j++)
			{
				if (isdigit(argv[i][j]) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}
			if (atoi(argv[i]) >= 0)
			{
				sum += atoi(argv[i]);
			}
		}
	}
	printf("%d\n", sum);
	return (0);
}
