#include "lists.h"

/**
* delete_dnodeint_at_index - deletes a node at a given index
*
* @head: a double pointer to the head of a list
* @index: the given index
* Return: returns 1 if it succeeded, -1 if it failed
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *curr = *head;

	if (*head == NULL)
	{
		return (-1);
	}
	for (i = 0; i < index; i++)
	{
		if (curr == NULL)
		{
			return (-1);
		}
		curr = curr->next;
	}
	if (curr == *head)
	{
		*head = curr->next;
		if (curr->next != NULL)
		{
			curr->next->prev = NULL;
		}
		free(curr);
		return (1);
	}
	if (curr->next != NULL)
	{
		curr->next->prev = curr->prev;
	}
	curr->prev->next = curr->next;
	free(curr);
	return (1);
}
