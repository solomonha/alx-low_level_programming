#include "main.h"
/*function prototype */
int lengthstr(char *s);
int palindrome(char str[], int start, int end);
/**
 * is_palindrome - Entry Point
 * @s: input
 * Return: 0
 */
int is_palindrome(char *s)
{
	int length;

	length = lengthstr(s);

	if (length == 0)
		return (1);
	return (palindrome(s, 0, length - 1));
}

/**
 * lengthstr - finds the length count
 * @s: input
 * Return: length size
 */
int lengthstr(char *s)
{
	if (*s != '\0')
		return (1 + lengthstr(s + 1));
	return (0);
}

/**
 * palindrome - checks if start and end of string matches
 * @str: string
 * @start: start of string 0
 * @end: end of string from is_palindrome, from lengthstr
 * Return: if str is a palindrome
 */
int palindrome(char str[], int start, int end)
{
	/* if there is only one character */
	if (start >= end)
		return (1);
	/*if first and last characters do not match */
	if (str[start] != str[end])
		return (0);
	if (start <= end || start < end + 1)
		return (palindrome(str, start + 1, end - 1));
	return (1);
}
