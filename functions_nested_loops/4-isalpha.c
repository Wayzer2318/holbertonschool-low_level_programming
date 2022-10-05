#include "main.h"
#include <stdio.h>
/**
 * _isalpha - check if the charactere is alphabet.
 * @c: the caractere to check.
 * Return: return 1 or 0
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
