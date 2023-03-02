#include "main.h"
/**
 * print_number - a function that prints an integer
 * @n: integer to print
 */
void print_number(int n)
{
        unsigned int num = n;

        if (n < 0)
        {
                _putchar('-');
                num = -num;
        }
        else
        {
                if ((num / 10) > 0)
                        print_number(n / 10);
                _putchar((n % 10) + '0');
        }
}
