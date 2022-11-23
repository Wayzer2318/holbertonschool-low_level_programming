#include "lists.h"

int sum_dlistint(dlistint_t *head)
{
	unsigned int result = 0;

	while (head)
	{
		result += head->n;
		head = head->next;
	}
}
