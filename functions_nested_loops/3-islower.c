#include "main.h"
#include <stdio.h>
/**
 * _islower - check the lowercase caracter.
 * @c - the caractere to check.
 * Return: return 1 or 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
