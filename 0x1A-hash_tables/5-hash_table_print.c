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

	if (ht == NULL || ht->array == NULL)
		printf("\n");

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] == NULL)
			continue;
		if (printed)
			printf(", ");
		printf("\'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
		printed = 1;
	}
	printf("}\n");
}
