#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - adds new node at the begining of the list
 * @head: head parsed
 * @n: node value
 * Return: address of the new node if success otherwise NULL
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;

	node = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = *head;
	if (*head != NULL)
		(*head)->prev = node;
	node->prev = NULL;

	*head = node;

	return (node);
}
