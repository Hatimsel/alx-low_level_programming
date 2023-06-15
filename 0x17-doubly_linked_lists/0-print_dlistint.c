#include "lists.h"

/**
* print_dlistint - prints all the elements of a dlistint_t list.
*
* @h: a pointer to the head of the dll
* Return: returns the number of elements
*/

size_t print_dlistint(const dlistint_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
