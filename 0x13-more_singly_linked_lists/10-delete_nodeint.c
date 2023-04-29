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

	if (*head == NULL)
	{
	return (-1);
	}
	if (index == 0)
	{
		curr = *head;
		*head = (*head)->next;
		free(curr);
		return (1);
	}
	previous = *head;
	curr = (*head)->next;
	while (curr != NULL)
	{
		if (i == index)
		{
			previous->next = curr->next;
			free(curr);
			return (1);
		}
		previous = curr;
		curr = curr->next;
		i++;
	}
	return (-1);
}
