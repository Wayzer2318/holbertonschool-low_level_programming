#include <stdio.h>
#include "main.h"
/**
 * _strlen_recursion - strlen recursion
 * @s: variable
 */
int _strlen_recursion(char *s)
{
	if(!*s)
		return;
	return (1 + _strlen_recursion(s + 1));
	
}
