#include "lists.h"

/**
* insert_dnodeint_at_index -  inserts a new node at a given position.
* @h: a double pointer to the head of the linked list
* @idx: the index at which we are inserting
* @n: the data of the new node
* Return: returns the address of the new node, or NULL if it failed
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *prev = NULL, *curr;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	unsigned int i = 0;

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	if (*h == NULL || idx == 0)
	{
		new_node->prev = NULL;
		new_node->next = *h;
		if (*h != NULL)
		{
			(*h)->prev = new_node;
		}
		*h = new_node;
		return (new_node);
	}
	curr = *h;
	while (curr != NULL && i < idx)
	{
		prev = curr;
		curr = curr->next;
		i++;
	}
	if (curr == NULL && i < idx)
	{
		free(new_node);
		return (NULL);
	}
	prev->next = new_node;
	new_node->prev = prev;
	new_node->next = curr;
	if (curr != NULL)
	{
		curr->prev = new_node;
	}
	return (new_node);
}
