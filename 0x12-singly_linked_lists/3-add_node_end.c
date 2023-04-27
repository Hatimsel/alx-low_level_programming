#include "lists.h"
#include <string.h>

/**
* add_node_end - add a new node at the end of a list_t list
*
* @head: a pointer to the head pointer of the list
* @str: a pointer to the string to be stored in the new node
*
* Return: returns the address of the new element
*/

list_t *add_node_end(list_t **head, const char *str)
{
	if (head == NULL || str == NULL)
		return (NULL);

	list_t *new_node = malloc(sizeof(list_t));

	if (new_node->str == NULL)
	{
	free(new_node);
	return (NULL);
	}
	new_node->len = strlen(str);
	new_node->next = NULL;
	if (*head == NULL)
	{
	*head = new_node;
	}
	else
	{
	list_t *current = *head;

	while (current->next != NULL)
	{
	current = current->next;
	}
	current->next = new_node;
	}
	return (new_node);
}
