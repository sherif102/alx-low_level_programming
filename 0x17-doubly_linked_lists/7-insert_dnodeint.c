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

	node = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;

	if (idx == x)
	{
		node->prev = NULL;
		node->next = *h;
		if (*h != NULL)
			(*h)->prev = node;
		*h = node;
		return (node);
	}

	temp = *h;
	while (temp != NULL)
	{
		if (x == idx - 1)
		{
			node->next = temp->next;
			if (temp->next != NULL)
				temp->next->prev = node;
			temp->next = node;
			node->prev = temp;
			return (node);
		}
		temp = temp->next;
		x++;
	}
	free(node);
	return (NULL);
}
