#include "lists.h"

/**
* reverse_listint - Reverses a listint_t list
*
* @head: a double pointer to the head of the list
*
* Return: returns *head
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *bef = NULL;
	listint_t *af = NULL;

	while (*head != NULL)
	{
		af = (*head)->next;
		(*head)->next = bef;
		bef = *head;
		*head = af;
	}
	*head = bef;
	return (*head);
}
