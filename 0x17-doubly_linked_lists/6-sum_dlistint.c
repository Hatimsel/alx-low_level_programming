#include "lists.h"

/**
* sum_dlistint - prints the sum of element's data
*
* @head: a pointer to the head of a list
* Return: returns the sum of all the data (n) of a dlistint_t linked list.
*/

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
