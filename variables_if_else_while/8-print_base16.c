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
	int num;
	char ch;

	for(num = 0; num <= 9;num++)
	{
		putchar(num + '0');
	}
	for(ch ='a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
