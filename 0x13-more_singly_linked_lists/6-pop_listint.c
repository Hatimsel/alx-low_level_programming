#include "lists.h"

/**
* pop_listint - deletes the first node
*
* @head: a double pointer
* Return: returns the data of the deleted node
*/

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL)
	{
	return (0);
	}
	else
	{
	temp = *head;
	*head = (*head)->next;
	n = temp->n;
	free(temp);
	}
	return (n);
}
