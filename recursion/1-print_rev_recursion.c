#include <stdio.h>
#include "main.h"

void _print_rev_recursion(char *s)
{
	int i;

	i = _strlen(s) - 1;
	if(*s < 0)
	{
		putchar(s[i - s]);
		_print_rev_recursion(s)
	}
}
