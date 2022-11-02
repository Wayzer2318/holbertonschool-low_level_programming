#include <stdio.h>
#include <stdlib.h>
/**
 * print_name - function that print name
 * @name: name to print
 * @f: the function to send name
 * Return: 0
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return (NULL);
	f(name)
}
