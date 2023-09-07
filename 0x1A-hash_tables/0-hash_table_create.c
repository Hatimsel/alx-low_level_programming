#include "hash_tables.h"

/**
 * hash_table_create - Creates a new hash table
 *
 * @size: the size of the new hash table
 * Return: returns a pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	size_t i = 0;
	hash_table_t *hash_table = malloc(sizeof(hash_table_t));

	if (hash_table == NULL)
		return (NULL);
	hash_table->size = size;
	hash_table->array = malloc(sizeof(hash_table) * size);

	if (hash_table->array == NULL)
	{
		free(hash_table);
		return (NULL);
	}
	while (i < size)
	{
		hash_table->array[i] = NULL;
		i++;
	}
	return (hash_table);
}
