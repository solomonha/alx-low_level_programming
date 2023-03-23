#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - a function that prints anything
 * c = char,
 * i = int,
 * f = float,
 * s = char * (if null print (nil))
 * @format: list of arg types
 * Return: 0
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int counter = 0, index = 0;
	char *separator = ", ";
	char *str;

	va_start(args, format);

	while (format && format[index])
		index++;

	while (format && format[counter])
	{
		if (counter  == (index - 1))
		{
			separator = "";
		}
		switch (format[counter])
		{
		case 'c':
			printf("%c%s", va_arg(args, int), separator);
			break;
		case 'i':
			printf("%d%s", va_arg(args, int), separator);
			break;
		case 'f':
			printf("%f%s", va_arg(args, double), separator);
			break;
		case 's':
			str = va_arg(args, char *);
			if (str == NULL)
				str = "(nil)";
			printf("%s%s", str, separator);
			break;
		}
		counter++;
	}
	printf("\n");
	va_end(args);
}

