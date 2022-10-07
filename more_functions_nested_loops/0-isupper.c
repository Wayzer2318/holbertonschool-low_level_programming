#include "main.h"
#include <stdio.h>

/**
 * _isupmer - check if it's uper
 * @c: caracter to check
 * Return: Always 0.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
