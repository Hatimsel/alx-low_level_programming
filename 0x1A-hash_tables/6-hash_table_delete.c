#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 *
 * @ht: a pointer to the hash table to be delited
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *tmp, *curr;

	if (ht == NULL)
		return;

	if (ht->array == NULL)
	{
		free(ht);
		return;
	}
	for (i = 0; i < ht->size; i++)
	{
		curr = ht->array[i];
		while (curr != NULL)
		{
			tmp = curr->next;
			free(curr->value);
			free(curr);

			curr = tmp;
		}
	}
	free(ht->array);
	free(ht);
}
