#include "hash_tables.h"

/**
 * hash_table_create - creates a new hash table
 * @size: the size of the array
 *
 * Return: returns a pointer to the newly created table in success else NULL
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht = (hash_table_t*)malloc(sizeof(hash_table_t) * size);

	if (ht == NULL)
	{
		return (NULL);
	}
	return (ht);
}
