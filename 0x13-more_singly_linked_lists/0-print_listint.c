#include "lists.h"

/**
* print_listint - prints all elements
*
* @h: a pointer to listint_t
*
* Return: returns number of nodes
*/

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
