#include "lists.h"


/**
* free_list - frees a list_t list.
*
* @head: head pointer to node
*
*/

void free_list(list_t *head)
{
	while (head != NULL)
	{
		list_t *next_node;

		next_node = head->next

		free(head->str);
		free(head);
		head = next_node;
	}
}
