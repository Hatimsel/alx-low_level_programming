#include "lists.h"

/**
* *get_nodeint_at_index - gets node at index
*
* @head: a pointer to the root node
* @index: the node's
*
* Return: returns the node indexed
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *curr = head;

	if (curr == NULL)
	{
	return (NULL);
	}
	while (curr != NULL)
	{
		if (i == index)
		{
		return (curr);
		}
	i++;
	curr = curr->next;
	}

	return (NULL);
}
