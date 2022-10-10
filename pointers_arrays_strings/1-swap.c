#include "main.h"
#include <stdio.h>

/**
 * swap_int - point to an int
 * @a: the number to swap
 * @b: the number to swap in
 * Return: update value.
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
