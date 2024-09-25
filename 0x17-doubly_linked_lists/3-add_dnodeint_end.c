#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - adds node at the end of the list
 * @head: parsed head
 * @n: data stored
 * Return: address of the new node or NULL if failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp, *node;

	node = (dlistint_t *)malloc(sizeof(dlistint_t));
        if (node == NULL)
                return (NULL);

	if (*head == NULL)
	{
		node->next = NULL;
		node->prev = NULL;
		node->n = n;

		*head = node;
		return (node);
	}

	temp = *head;
	while (temp != NULL)
	{
		if (temp->next == NULL)
		{
			node->n = n;
			node->next = NULL;
			node->prev = temp;
			temp->next = node;
			break;
		}
		temp = temp->next;
	}
	return (node);
}
