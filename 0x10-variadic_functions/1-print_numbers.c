#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers -  a function that prints numbers, followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 * Return: 0(success)
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list(args);
	unsigned int i;
	
	if (n <= 0)
	{
		printf("\n");
		return;
	}
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		if (i < (n - 1))
		{
			printf("%d", va_arg(args, int));
			if (separator != NULL)
				printf("%s", separator);
		}
		else
			printf("%d\n", va_arg(args, int));
	}
	va_end(args);
}
