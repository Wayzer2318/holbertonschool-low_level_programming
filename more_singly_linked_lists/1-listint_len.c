#include "lists.h"
#include <stdio.h>
/**
 * listint_len - length of a list
 * @h: the head of the list
 * Return: lenght of the list
 */
size_t listint_len(const listint_t *h)
{
	size_t counter = 0;

	while (h)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
