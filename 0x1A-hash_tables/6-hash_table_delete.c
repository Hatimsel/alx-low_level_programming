#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table by freeing its memory
 *
 * @ht: The hash table to be deleted
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *head, *tmp;

	if (ht == NULL || ht->array == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		head = ht->array[i];
		while (head)
		{
			tmp = head;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
			head = head->next;
		}
	}
	free(ht->array);
	free(ht);
}
