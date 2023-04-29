#include "lists.h"

/**
* sum_listint - calculates the sum of n
*
* @head: a pointer to the first node
* Return: returns the sum
*/

int sum_listint(listint_t *head)
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
