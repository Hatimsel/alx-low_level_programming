#include "hash_tables.h"

/**
 * key_index - gets the index at which we will store our key value
 *
 * @key: the key to be stored
 * @size: the array size
 *
 * Return: returns an index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long i = 0;

	i = hash_djb2(key) % size;
	return (i);
}
