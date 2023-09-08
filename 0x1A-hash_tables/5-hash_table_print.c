#include "hash_tables.h"

/**
 * hash_table_print - Prints the hash table's elements
 *
 * @ht: The hash table to be printed
 */

void hash_table_print(const hash_table_t *ht)
{
	int printed = 0;
	unsigned long int i = 0;
	hash_node_t *tmp;

	if (ht == NULL || ht->array == NULL)
		printf("{}\n");

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] == NULL)
			continue;
		tmp = ht->array[i];
		while (tmp)
		{
			if (printed)
				printf(", ");
			printf("'%s': '%s'", tmp->key, tmp->value);
			printed = 1;
			tmp = tmp->next;
		}
	}
	printf("}\n");
}
