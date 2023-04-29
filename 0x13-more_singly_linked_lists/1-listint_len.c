#include "lists.h"

/**
* listint_len - prints the length of a linked list
*
* @h: a pointer to listint_t
*
* Return: returns the number of nodes
*/

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
