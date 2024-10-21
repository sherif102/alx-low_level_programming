#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the table to be created
 * Return: pointer to the created hash table or NULL if failed
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_node_t **node = NULL;
	hash_table_t *table = (hash_table_t *)malloc(sizeof(hash_node_t) * size );

	if (table == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		table[i].array = node;

	return (table);
}
