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
	unsigned count = 0;

	if (h == NULL)
	{
	exit(1);
	}
	while (h != NULL)
	{
	printf("%d\n", h->n);
	count++;
	h = h->next;
	}
	return (count);
}
