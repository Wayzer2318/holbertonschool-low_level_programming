#include "lists.h"
#include <stdio.h>
/**
 * list_len - list number of nodes
 * @h: first node
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	int i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
