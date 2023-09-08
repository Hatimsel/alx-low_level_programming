#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a given key
 *
 * @ht: Our the hash table
 * @key: The key we are looking for its value
 * Return: returns the value if found else NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *tmp;

	if (ht == NULL || ht->array == NULL || key == NULL || strlen(key) == 0)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];

	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}
	return (NULL);
}
