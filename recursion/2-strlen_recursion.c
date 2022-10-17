#include <stdio.h>
#include "main.h"
/**
 * _strlen_recursion - strlen recursion
 * @s: variable
 */
int _strlen_recursion(char *s)
{
	int i = 0;
	if(!*s)
	return;
	{
		i++;
		_strlen_recursion(s + 1);
		printf("%d", i);
	}
}
