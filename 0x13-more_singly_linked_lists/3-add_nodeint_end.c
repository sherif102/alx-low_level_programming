#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - add node at the end of the list
 * @head: node heard
 * @n: node value
 * Return: new node address or NULL if failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp = *head;
	listint_t *new_node = (listint_t *)malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}

	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new_node;
	return (new_node);
}
