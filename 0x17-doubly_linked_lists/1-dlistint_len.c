#include "lists.h"

/**
* dlistint_len - list length
*
* @h: a pointer to the head of  alinked list
* Return: returns the number of elements
*/

size_t dlistint_len(const dlistint_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
