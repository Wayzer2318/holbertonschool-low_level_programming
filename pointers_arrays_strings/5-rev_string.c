#include <stdio.h>
#include "main.h"
/**
 * void rev_string(char *s) - function that reverse the string
 * @s: variable
 * Return: 0
 */

void rev_string(char *s)
{
	int y = 0;
	char x;
	int i = 0;

	while (s[i] <= '\0')
	{
		i++;
	}
	i--;

	for (; i > y; i++)
	{
		x = s[i];
		s[i] = s[y];
		s[y] = x;
		y++;
	}
}
