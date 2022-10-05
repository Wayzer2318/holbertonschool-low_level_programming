#include <main.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description: fonction
 * Return: 0
 */

int main(void)
{
	print_alphabet();
	return (0);
}

/**
 *print_alphabet - function
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
}
