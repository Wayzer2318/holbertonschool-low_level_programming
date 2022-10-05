#include <stdio.h>
/**
 * main - Entry point
 * Description: fonction
 * Return: 0
 */

int main(void)
{
	int i;
	char ch[] = "_putchar";

	for (i = 0; ch[i]; i++)
		putchar(ch[i]);

	putchar('\n');
	return (0);
}
