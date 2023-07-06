#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key.
 *
 * @ht: a pointer to the hash table
 * @key: the key to be retrieved
 *
 * Return: returns the value associated with the key
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *curr;
	unsigned long int i = 0;

	i = key_index((const unsigned char *)key, ht->size);
	curr = ht->array[i];
	if (curr != NULL && strcmp(curr->key, key) == 0)
	{
		return (curr->value);
	}
	else
	{
		while (curr != NULL)
		{
			if (strcmp(curr->key, key) == 0)
			{
				return (curr->value);
			}
			curr = curr->next;
		}
		return (NULL);
	}
}
