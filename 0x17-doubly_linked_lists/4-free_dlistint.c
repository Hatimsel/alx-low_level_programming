#include "lists.h"

/**
* free_dlistint - frees the memory
* @head: a pointer to the head
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		free(tmp);
		head = head->next;
	}
}
