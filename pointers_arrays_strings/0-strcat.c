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

	while(dest[i] != '\0')
		i++;

	for (x = 0; src[x] != '\0'; x++)
	{
		dest[x] = src[i];
		i++;
	}
	putchar('\n');
	return (dest);
}
