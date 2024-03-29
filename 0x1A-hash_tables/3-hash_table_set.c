#include "hash_tables.h"

/**
 * hash_table_set - Inserts a new node
 *
 * @ht: a pointer to our hash table
 * @key: the key element
 * @value: the value element
 *
 * Return: returns 1 if succeeded else 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	const unsigned char *un_key = (const unsigned char *)key;
	unsigned long int index = key_index(un_key, ht->size);
	hash_node_t *new_node = malloc(sizeof(hash_node_t)), *tmp;

	if (ht == NULL || ht->array == NULL || key == NULL || strlen(key) == 0)
	{
		free(new_node);
		return (0);
	}
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;

	if (ht->array[index] == NULL)
	{
		ht->array[index] = new_node;
	}
	else
	{
		tmp = ht->array[index];
		if (strcmp(key, tmp->key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			free(new_node->key);
			free(new_node->value);
			free(new_node);
			return (1);
		}
		else
		{
		new_node->next = tmp;
		ht->array[index] = new_node;
		}
	}
	return (1);
}
