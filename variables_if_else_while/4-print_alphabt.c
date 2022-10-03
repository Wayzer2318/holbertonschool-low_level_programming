#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - function
 *
 * Return: exit status code
 */
int main(void)
{
	char ch = 'a';
	char CH = 'A';

	while (ch <= 'z')
	{
		if (ch == 'e' || ch == 'q')
		{
			continue
		}
		putchar(ch);
		ch++;
	}
}
