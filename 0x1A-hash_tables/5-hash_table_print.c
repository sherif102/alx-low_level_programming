#include "hash_tables.h"

/**
 * hash_table_print - prints the hash table
 * @ht: hash table
 * @ti: table iterator
 * @li: list iterator
 * Return: success
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int ti;
	hash_node_t *li, *temp;
	char *output;

	if (ht == NULL || ht->array == NULL)
	{
		printf("{}\n");
		return;
	}

	ti = 0;
	output = malloc(2048);
	while (ht->array[ti])
	{
		li = ht->array[ti];
		if (li != NULL)
		{
			temp = li;
			while (temp != NULL)
			{
				strcat(output, "\'");
				strcat(output, temp->key);
				strcat(output, "\'");

				strcat(output, ": ");
				strcat(output, "\'");
				strcat(output, temp->value);
				strcat(output, "\'");
				if (temp->next != NULL)
					strcat(output, ", ");

				temp = temp->next;
			}
		}
		ti++;
	}
	printf("%s\n", output);
}