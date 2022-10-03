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
	int n;
	int digit;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	digit = n % 10;
	/* your code goes there */
	if (n == 0)
		printf("Last digit of %d is %d and is 0\n", n, digit);
	else if (n > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, digit);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, digit);

	return (0);
}
