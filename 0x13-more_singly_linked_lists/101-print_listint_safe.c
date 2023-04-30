#include "lists.h"

/**
* print_listint_safe - prints a listint list
*
* @head: a pointer to the head
* Return: returns the num of nodes
*/

size_t print_listint_safe(const listint_t *head)
{
	unsigned int count = 0;
	const listint_t *det = head;
	const listint_t *cycle = head;

	while (cycle && cycle->next)
	{
	printf("[%p] %d\n", (void *) det, det->n);
	count++;
	det = det->next;
	cycle = cycle->next->next;
	if (det == cycle)
	{
	printf("-> [%p] %d\n", (void *) det, det->n);
	break;
	}
	}

	if (cycle && !cycle->next)
	{
	printf("[%p] %d\n", (void *) det, det->n);
	count++;
	}
	if (!head)
	{
	exit(98);
	}
	return (count);
}
