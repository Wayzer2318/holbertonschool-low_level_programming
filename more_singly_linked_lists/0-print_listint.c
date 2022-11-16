#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_listint - print a list
 * @h: head of the list
 * Return: number of int
 */
size_t print_listint(const listint_t *h)
{
	size_t counter = 0;

	while (h)
	{
		printf("%i\n", h->n);
		h = h->next;
		counter++;
	}
	return (counter);
}
