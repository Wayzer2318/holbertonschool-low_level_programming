#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * str_concat - fuction
 * @s1: varible
 * @s2: variable
 * Return: nothing
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	unsigned int len;
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	unsigned int i = 0;
	unsigned int j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;

	len = len1 + len2;

	concat = malloc(sizeof(char) * concat + 1)

	if (concat == NULL)
		return('\0');

	while (i < len)
	{
		concat[i] = s2[j];
		i++;
		j++;
	}
	return (concat);
}
