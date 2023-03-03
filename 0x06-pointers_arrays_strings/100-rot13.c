#include "main.h"
#include <stdio.h>

/**
 * rot13 - a function that encodes a string using rot13
 * @s: pointer to string
 * return: Always 0 (Success)
 */
char *rot13(char *s)
{
        int i, j;
        char input[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
        char output[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

        for (i = 0; s[i] != '\0'; i++)
        {
                for (j = 0; s[j] != '\0'; j++)
                {
                        if (s[i] == input[j])
                        {
                                s[i] = output[j];
                                break;
                        }
                }
        }
        return (s);
}
