#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table.
 *
 * @ht: a pointer to the hash table
 * @key: the new key to be inserted
 * @value: the value to be inserted
 *
 * Return: returns 1 when success else 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long i = 0;
	hash_node_t *new, *curr;

	if (ht == NULL || ht->array == NULL || key == NULL)
		return (0);
	new = (hash_node_t *) malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);

	new->key = (char *)key;
	if (value != NULL && strlen(value) > 0)
		new->value = strdup(value);
	else
		new->value = strdup("");

	new->next = NULL;

	i = key_index((const unsigned char *)key, ht->size);
	if (ht->array[i] == NULL)
	{
		ht->array[i] = new;
		return (1);
	}
	else
	{
		curr = ht->array[i];
		new->next = curr;
		ht->array[i] = new;
	}
	return (1);
}
