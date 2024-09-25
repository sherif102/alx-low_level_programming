#include "lists.h"

/**
 * get_dnodeint_at_index - find the nth node of a list
 * @head: parsed head
 * @index: node index
 * Return: node index or NULL if not exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int n = 0;

	if (head == NULL || index < n)
		return (NULL);

	temp = head;
	while (temp != NULL && index > 0)
	{
		index--;
		temp = temp->next;
		if (temp == NULL && index > 1)
			return (NULL);
	}
	return (temp);
}
