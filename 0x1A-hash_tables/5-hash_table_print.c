#include "hash_tables.h"

/**
 * hash_table_print - prints the hash table
 * @ht: hash table
 * Return: success
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int ti, oi = 0;
	int bc = 1;
	hash_node_t *temp;
	char *output;

	if (ht == NULL)
		return;

	output = malloc(BUFFER);
	if (output == NULL)
		return;

	output[oi++] = '{';
	for (ti = 0; ti < ht->size; ti++)
	{
		if (ht->array[ti] != NULL && ht->array[ti - 1] != NULL)
			datacopy(output, "', ", &oi, &bc);
		if (ht->array[ti] != NULL)
		{
			temp = ht->array[ti];
			while (temp != NULL)
			{
				output[oi++] = '\'';
				datacopy(output, temp->key, &oi, &bc);
				datacopy(output, "': '", &oi, &bc);
				datacopy(output, temp->value, &oi, &bc);
				temp = temp->next;
				if (temp != NULL)
					datacopy(output, "', ", &oi, &bc);
			}
		}
	}
	output[oi] = '}';
	printf("%s\n", output);
}

/**
 * datacopy - copy input and append to output
 * it reallocate memory if needed
 * @output: copy to destination
 * @input: copy from source
 * @oi: output iterator, it is the number of all char in output
 * @bc: buffer counter, 1024 * bc
 * Return: success
 */
void datacopy(char *output, char *input, unsigned long int *oi, int *bc)
{
	unsigned long int vi;
	int len = strlen(output) + 15;

	if (len >= BUFFER * (*bc))
		output = realloc(output, BUFFER * (++(*bc)));

	for (vi = 0; vi < strlen(input); vi++)
		output[(*oi)++] = input[vi];
}
