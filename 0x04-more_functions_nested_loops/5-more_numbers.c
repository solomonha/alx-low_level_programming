#include "main.h"

/**
 * more_numbers - a function that prints 10 times the numbers, from 0 to 14
 * _putchar only 3 times
 * Return: 0-14 x10 followed by new line
 */
void more_numbers(void)
{
	int n, m;

	n = 0;
	while (n < 10)
	{
		m = 0;
		while (m <= 14)
		{
			if (m >= 10)
			{
				_putchar((m / 10) + '0');
			}
			_putchar((m % 10) + '0');
			m++;
		}
		n++;
		_putchar('\n');
	}
}
