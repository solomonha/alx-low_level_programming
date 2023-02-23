#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line.
 * @size: is the size of the triangle
 * Return: mirrored triangle using #
 */
void print_triangle(int size)
{
	int col, sp;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (col = 1; col <= size; col++)
		{
			for (sp = 1; sp <= size; sp++)
				if (sp < size - col - 1)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			_putchar('\n');
		}
	}
}
