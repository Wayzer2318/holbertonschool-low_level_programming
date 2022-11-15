#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *
 *
 *
 */
void free_list(list_t *head)
{
	list_t *temp;

	temp = head;
	while (temp->next != NULL)
	{
		temp = head;
		temp = temp->next;
		free(head);
		head = temp;
	}
}
