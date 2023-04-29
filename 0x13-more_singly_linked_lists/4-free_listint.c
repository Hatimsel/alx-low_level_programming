#include "lists.h"

/**
* free_listint - Frees a list
*
* @head: a pointer
*/

void free_listint(listint_t *head)
{
	listint_t *curr = head;
	listint_t *aux;

	while (curr != NULL)
	{
		aux = curr;

		curr = curr->next;
		free(aux);
	}
}
