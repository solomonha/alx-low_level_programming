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
        char encode[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
        char decode[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

        for (i = 0; s[i] != '\0'; i++)
        {
                for (j = 0; j < 52; j++)
                {
                        if (s[i] == encode[j])
                        {
                                s[i] = decode[j];
                                break;
                        }
                }
        }
        return (s);
}
