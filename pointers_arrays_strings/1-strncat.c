#include "main.h"
#include <stdio.h>

/**
 * _strncat - concatenate two string
 * @src: variable
 * @dest: variable
 * @n: variable
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
        int i = 0;
        int x = 0;

        for (i = 0; dest[i] != '\0'; i++)
        {
        }

        for (x = 0; src[x] != n; x++)
        {
                dest[i] = src[x];
                i++;
        }
        return (dest);	
}
