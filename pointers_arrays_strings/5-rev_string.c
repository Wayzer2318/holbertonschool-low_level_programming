#include <stdio.h>
#include "main.h"
/**
 * _strlen - point to an int
 * @s: string
 * Return: length of string.
 */

int _strlen(char *s)
{
        int i = 0;

        while (s[i] != '\0')
                i++;
        return (i);
}
/**
 * void rev_string(char *s) - function that reverse the string
 * @s: variable
 * Return: 0
 */

void rev_string(char *s)
{
	int y;
	char x;
	int i;

	y = _strlen(s);

	for (i = 0; i < (y - 1 - i); i++)
	{
		x = s[y];
		s[y] = s[i];
		s[i] = x;
	}
}
