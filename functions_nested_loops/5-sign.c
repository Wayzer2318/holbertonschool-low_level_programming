#include "main.h"
#include <stdio.h>
/**
 * print_sign - check if the charactere is alphabet.
 * @c: the caractere to check.
 * Return: return 1 or 0
 */

int c

int print_sign(int n)
{
	if (c < 0)
	{
		print("-");
		return (-1);
	}
	else if (c > 0 )
	{
		printf("+");
		return (1);
	}
	else
	{
		print("0");
		return (0);
	}
}
