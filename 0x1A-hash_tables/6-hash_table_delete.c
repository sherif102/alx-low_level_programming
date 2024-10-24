#include "hash_tables.h"

/**
 * hash_table_delete - deletes data from hash table
 * @ht: hash table
 * Return: success
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int ti;
	hash_node_t *node, *temp;

	if (ht == NULL)
		return;

	for (ti = 0; ti < ht->size; ti++)
	{
		node = ht->array[ti];
		while (node != NULL)
		{
			temp = node;
			node = node->next;
			free(temp->value);
			free(temp->key);
			free(temp);
		}
	}
	free(ht->array);
	free(ht);
}
