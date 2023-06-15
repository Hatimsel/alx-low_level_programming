#include "lists.h"

/**
* add_dnodeint - adds a new node to the beginning
* @head: a double pointer to the head
* @n: the data of the new node
* Return: returns the address of the new node if success else NULL
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->prev = NULL;
	if (*head != NULL)
	{
	new_node->next = *head;
	(*head)->prev = new_node;
	}
	*head = new_node;

	return (new_node);
}
