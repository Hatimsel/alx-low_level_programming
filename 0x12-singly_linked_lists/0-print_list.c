#include "list.h"

/**
* print_list - prints all the elements of a list
*
* @h: pointer to the head of the list
*
* Return: returns the number of nodes
*/

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
		{
		printf("[%d] %s\n", h->len, h->str);
		}
		else
		{
		printf("[0] (nil)");
		}
		h = h->next;
		count++;
	}
	return (count);
}
