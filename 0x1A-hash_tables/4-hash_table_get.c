#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value from hash table
 * @ht: hash table
 * @key: key to use
 * Return: value stored in the key or NULL if not found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	char *value;
	unsigned long int index = key_index((const unsigned char *)key, ht->size);

	if (ht == NULL || ht->array[index] == NULL)
		return (NULL);

	value = strdup(ht->array[index]->value);

	if (value == NULL)
	{
		free(value);
		return (NULL);
	}
	return (value);
}
