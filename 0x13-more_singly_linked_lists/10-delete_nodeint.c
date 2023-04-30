#include "lists.h"

/**
* delete_nodeint_at_index - deletes a node at specific index
*
* @head: a double pointer
* @index: the indexed node to be deleted
*
* Return: returns 1 if it succeeded, -1 if it failed
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *curr;
	listint_t *previous;

	previous = *head;

	if (index != 0)
	{
		for (i = 0; i < index - 1 && previous != NULL; i++)
		{
		previous = previous->next;
		}
	}

	if (previous == NULL || (previous->next == NULL && index != 0))
	{
	return (-1);
	}

	curr = previous->next;
	if (index != 0)
	{
	previous->next = curr->next;
	free(curr);
	}
	else
	{
	free(previous);
	*head = curr;
	}
	return (1);
}
