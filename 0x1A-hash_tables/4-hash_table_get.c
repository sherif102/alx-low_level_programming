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
	unsigned long int index;
	hash_node_t *temp;

	if (ht == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
		return (NULL);

	temp = ht->array[index];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			value = strdup(temp->value);
			if (value == NULL)
			{
				free(value);
				return (NULL);
			}
			return (value);
		}
		temp = temp->next;
	}
	return (NULL);
}
