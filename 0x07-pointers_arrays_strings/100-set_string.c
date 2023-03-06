#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 *
 * @s: The pointer to change
 * @to: The value to change the pointer to
 * Return: 0 (success)
 */
void set_string(char **s, char *to)
{
	*s = to;
}
