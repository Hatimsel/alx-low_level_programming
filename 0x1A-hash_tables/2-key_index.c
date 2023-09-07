#include "hash_tables.h"

/**
 * key_index - gives the index of a key
 *
 * @key: the key to generate an index for
 * @size: the array's size
 * Return: returns the index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_code = hash_djb2(key);

	return (hash_code % size);
}
