#include <stdio.h>
#include "main.h"
/**
 * _strlen_recursion - strlen recursion
 * @s: variable
 * return: nothing
 * return: nothing
 */
int _strlen_recursion(char *s)
{
	if (!*s)
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
