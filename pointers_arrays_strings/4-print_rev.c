#include <stdio.h>
#include "main.h"
/**
 * print_rev - function that prints the string
 * _strlen - function that count 
 *@str: variable
 * Return: 0
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}

void print_rev(char *s)
{
	int i;
	int len;

	len = _strlen(s);
	for (i = 0; i < (len / 2); i++)
	{
		s[len] = s[i];
	}
	putchar(s[len]);

}
