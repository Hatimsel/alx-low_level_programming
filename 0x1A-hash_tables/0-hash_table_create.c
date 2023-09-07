#include "hash_tables.h"

/**
 * hash_table_create - Creates a new hash table
 *
 * @size: the size of the new hash table
 * Return: returns a pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table = malloc(sizeof(hash_table_t) * size);

	if (hash_table == NULL)
		return (NULL);
	return (hash_table);
}
