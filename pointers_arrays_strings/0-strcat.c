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

	while(dest[x] != '\0')
		x++;

	while (src[i] != '\0')
		dest[x] = src[i];
		x++;
		i++;
	return(dest);
}
