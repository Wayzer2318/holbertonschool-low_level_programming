#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenate two string
 * @src: variable
 * @dest: variable
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int x = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	for (x = 0; src[x] != '\0'; x++)
	{
		dest[i] = src[x];
		i++;
	}
	return (dest);
}
