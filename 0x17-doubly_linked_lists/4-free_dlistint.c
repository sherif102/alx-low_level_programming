#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - frees a list
 * @head: parsed head
 * Return: success
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (head == NULL)
		return;
	temp = head;
	while (head != NULL)
	{
		head = head->next;
		free(temp);
		temp = head;
	}
	free(temp);
}
