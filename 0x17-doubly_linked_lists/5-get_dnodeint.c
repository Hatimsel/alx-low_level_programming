#include "lists.h"

/**
* get_dnodeint_at_index - gets a node at index
* @head: a pointer to the head of the list
* @index: the index from which we get the node
* Return: returns the nth node of a dlistint_t linked list.
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		if (i == index)
		{
			break;
		}
		i++;
		head = head->next;
	}
	if (index > i)
	{
		return (NULL);
	}
	return (head);
}
