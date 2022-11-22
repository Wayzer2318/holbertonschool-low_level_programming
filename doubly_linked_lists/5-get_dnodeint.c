#include "lists.h"

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node = head;
	int counter = 0;

	while (node != NULL && counter <= index)
	{
		if (index = counter)
			return (node);
		node = node->next;
		counter++;
	}
	return('\0');
}
