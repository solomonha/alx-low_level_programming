#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - function to determine minimum number of coins needed to make change
* @argc: argument to determine how many arguments to program are provided
*
* @argv: argument array with program name and arguments
*
* Return: (0)
*/
int divide_change(int *change, int cent);
int main(int argc, char *argv[])
{
	int change;
	int coins = 0;

	if (argc != 2)
	{
		printf("%s\n", "Error");
		return (1);
	}
	change = atoi(argv[1]);

	if (change < 1)
	{
		printf("%d\n", 0);
	}
	else
	{
		coins += divide_change(&change, 25);
		coins += divide_change(&change, 10);
		coins += divide_change(&change, 5);
		coins += divide_change(&change, 2);
		coins += divide_change(&change, 1);
		printf("%d\n", coins);
	}
	return (0);
}

/**
* divide_change - subtracts off change while still divisible by cent amount
* @change: total change left to make
*
* @cent: largest cent to make change with
*
* Return: coins needed to make change with that cent
*/

int divide_change(int *change, int cent)
{
	int coins = 0;

	while (*change >= cent)
	{
		coins++;
		*change -= cent;
	}
	return (coins);
}
