#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings -  a function that prints strings, followed by a new line.
 * @separator: the string to be printed between the strings
 * @n: the number of strings passed to the function
 * Return: 0 (success)
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	if (n <= 0)
	{
		printf("\n");
		return;
	}
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);
		if (str == NULL)
		{
			str = "(nil)";
		}	
		if (i != (n - 1))
		{
			printf("%s", str);
			if (separator != NULL)
			{
				printf("%s", separator);
			}
		}
		else
		{
			printf("%s\n", str);
		}
	}
	va_end(args);
}

