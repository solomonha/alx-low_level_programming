#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * op_add - 5 functions
 * @a: First input integer
 * @b: second input integer
 * Return: 0
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts int b from int a
 * @a: first input integer
 * @b: second input integer
 *
 * Return: integer result of operation
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two integers together
 * @a: first input integer
 * @b: second input integer
 *
 * Return: integer result of operation
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides int b from int a
 * @a: first input integer
 * @b: second input integer
 *
 * Return: integer result of operation
 */

int op_div(int a, int b)
{
	if (b != 0)
		return (a / b);
	exit(100);
}

/**
 * op_mod - finds remainder of dividing int b from int a
 * @a: first input integer
 * @b: second input integer
 *
 * Return: integer result of operation
 */

int op_mod(int a, int b)
{
	if (b != 0)
		return (a % b);
	exit(100);
}
