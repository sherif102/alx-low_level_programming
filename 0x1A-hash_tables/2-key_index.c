#include "hash_tables.h"

/**
 * key_index - generates the index of a key
 * @key: the key to lookup for
 * @size: hash table size
 * Return: index generated
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hashr = hash_djb2(key);

	return (hashr % size);
}
