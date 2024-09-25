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

	node = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	temp = *h;

	if (idx == x) {
		node->prev = NULL;
		node->next = *h;
		*h = node;
		return (node);
	}

	x++;
	while (temp != NULL) {
		if (x == idx && temp->next != NULL) {
			node->next = temp->next;
			temp->next = node;
			node->prev = temp;
			return (node);
		}
		if (temp->next == NULL && x == idx) {
			node->next = NULL;
			node->prev = temp;
			temp->next = node;
			return (node);
		}
		temp = temp->next;
		x++;
	}
	free(node);
	return (NULL);
}
