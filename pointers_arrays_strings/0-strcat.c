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
	int i;
	int x = 0;

	while(dest[x] != '\0')
		x++;

	for (i = 0; src[i] != '\0'; x++)
		dest[x] = src[i];
		i++;
	return(dest);
}
