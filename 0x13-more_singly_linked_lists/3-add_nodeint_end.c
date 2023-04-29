#include "lists.h"

/**
* add_nodeint_end - add a node at the end
*
* @head: a double pointer
* @n: integer
*
* Return: returns the address of new_node
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *curr;

	if (new_node == NULL)
	{
	return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
	*head = new_node;
	}
	else
	{
	curr = *head;
		while (curr->next != NULL)
		{
		curr = curr->next;
		}
		curr->next = new_node;
	}

	return (new_node);
}
