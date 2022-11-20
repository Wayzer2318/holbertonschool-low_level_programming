#include "main.h"
/**
 *
 *
 *
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int mask = 1;
	unsigned int bit = sizeof(n) * 8 - 1;

	if (idex > bit)
		return (-1);
	mask += mask << index;

	if (n & mask)
		return (1);
	else
		return (0);
}
