#include "lists.h"

/**
* free_listint2 - frees memory
*
* @head: doule pointer
*/

void free_listint2(listint_t **head)
{
	listint_t *curr = *head;
	listint_t *aux;

	while (curr != NULL)
	{
		aux = curr;
		curr = curr->next;
		free(aux);
	}
	*head = NULL;
}
