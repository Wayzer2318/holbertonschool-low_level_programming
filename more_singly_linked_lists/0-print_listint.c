#include "lists.h"
#incldue <stdio.h>
#include <stdlib.h>
/**
 *
 *
 *
 */
size_t print_listint(const listint_t *h)
{
	size_t counter = 0;

	while (h)
	{
		printf("%i/n", h->n);
		h->next = h;
		counter++;
	}
	return (counter);
}
