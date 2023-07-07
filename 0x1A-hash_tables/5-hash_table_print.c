#include "hash_tables.h"

/**
 * hash_table_print - prints the hash table
 *
 * @ht: a pointer to the hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	int printed = 0;
	hash_node_t *curr;

	if (ht == NULL)
		return;

	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		curr = ht->array[i];
		while (curr != NULL)
		{
			if (printed > 0)
				printf(", ");

			printf("'%s': '%s'", curr->key, curr->value);
			curr = curr->next;
			printed = 1;

		}
	}
	printf("}\n");
}
