#include "hash_tables.h"

/**
 * hash_table_print - Prints the hash table's elements
 *
 * @ht: The hash table to be printed
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;

	if (ht == NULL)
		printf("\n");

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] == NULL)
			continue;
		printf("\'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
		if (i < ht->size - 1)
			printf(", ");
	}
	printf("}\n");
}
