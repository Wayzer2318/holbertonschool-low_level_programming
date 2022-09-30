#include <stdio.h>

/**
 * main - function
 *
 * Return: exit status code
 */
int main(void)
{
	printf("Size of a %d char: \n", sizeof(char));
	printf("Size of an int: \n", sizeof(int));
	printf("Size of a long int: \n", sizeof(long int));
	printf("Size of a long long int: \n", sizeof(long long int));
	printf("Size of a float: \n", sizeof(float));
	return (0);
}
