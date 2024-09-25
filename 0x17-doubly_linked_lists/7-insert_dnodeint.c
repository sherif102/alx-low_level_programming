#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - inserts a node at a given index position
 * @h: parsed head
 * @idx: index position to be inserted
 * @n: data to insert
 * Return: node address or NULL if otherwise
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *node;
	unsigned int x = 0;

	if (idx < x)
		return (NULL);

	if (idx == x)
	{
		temp = add_dnodeint(h, n);
		return (temp);
	}
	node = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (node == NULL)
	{
		free(node);
		return (NULL);
	}
	temp = *h;
	x++;
	while (temp != NULL && x < idx)
	{
		x++;
		temp = temp->next;

		if (temp == NULL && x == (idx - 1))
		{
			temp = add_dnodeint_end(h, n);
			return (temp);
		}
		if (temp == NULL)
		{
			free(node);
			return (NULL);
		}
	}
	node->n = n;
	node->next = temp->next;
	temp->next = node;
	node->prev = temp;
	return (node);
}
