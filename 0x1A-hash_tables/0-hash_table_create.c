#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the table to be created
 * Return: pointer to the created hash table or NULL if failed
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;

	if (size == 0)
		return (NULL);

	table = (hash_table_t *)calloc(1, sizeof(hash_table_t));

	if (table == NULL)
	{
		free(table);
		return (NULL);
	}

	table->array = calloc(size, sizeof(hash_node_t));

	if (table->array == NULL)
	{
		free(table->array);
		return (NULL);
	}

	table->size = size;

	return (table);
}
