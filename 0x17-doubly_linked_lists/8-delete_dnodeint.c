#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - deletes node at a given index
 * @head: parsed head
 * @index: index to be deleted
 * Return: 1 if success or -1 if failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *node;
	unsigned int x = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == x)
	{
		temp = *head;
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}

	temp = *head;
	while (temp != NULL && x < index - 1)
	{
		temp = temp->next;
		x++;
	}

	if (temp == NULL || temp->next == NULL)
		return (-1);
	node = temp->next;
	temp->next = node->next;
	if (node->next != NULL)
		node->next->prev = temp;
	free(node);
	return (1);
}
