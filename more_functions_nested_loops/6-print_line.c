#include "main.h"
/**
 * print_line - check the code
 * @n: number of print
 * Return: Always 0.
 */
void print_line(int n)
{
	int x = 0;

	while (x < n)
	{
		if (n > 0)
		{
			_putchar ('_');
			x++;
		}
		else
		{
			_putchar ('\n');
		}
	}
	_putchar ('\n');
}
