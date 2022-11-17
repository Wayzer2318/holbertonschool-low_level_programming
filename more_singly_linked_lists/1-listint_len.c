#include "lists.h"
#include <stdio.h>
/**
 *
 *
 *
 */
size_t listint_len(const listint_t *h)
{
	size_t counter;

	while (h)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
