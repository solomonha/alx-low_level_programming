#include "main.h"
/**
 * _puts_recursion - a function that prints a string, followed by a new line.
 * @s: input string to print
 * Return: 0 (success)
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		/* ASCII value of \n is 10 */
		_putchar(10);
	}
	else
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
}
