#include "main.h"

/**
 * jack_bauer -  prints every minute of the day of Jack Bauer.
 *
 * Return: void
 */
void jack_bauer(void)
{
	int i = 0, j = 0, k = 0;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 6; j++)
		{
			for (k = 0; k < 10; k++)
			{
				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
				_putchar(':');
				_putchar(j + '0');
				_putchar(k + '0');
				_putchar('\n');
			}
			k = 0;
		}
		j = 0;
	}
}
