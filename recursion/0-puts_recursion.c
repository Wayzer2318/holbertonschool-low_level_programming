#include <stdio.h>
/**
 * _puts_recursion - recursion
 * @s: variable
 */
void _puts_recursion(char *s)
{
	int i = 0;

	if(*s != '\0')
	{
		putchar(s);
		_puts_recursion(++s);
	}
	putchar('\n');
}
