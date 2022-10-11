#include <stdio.h>
#include "main.h"
/**
 * void rev_string(char *s) - function that reverse the string
 * @s: variable
 * Return: 0
 */
void rev_string(char *s)
{
	int i = 0;
	char x;
	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	while (i >= 0)
	{
		x = s[i];
		i--;
	}
	putchar('\n');
}
