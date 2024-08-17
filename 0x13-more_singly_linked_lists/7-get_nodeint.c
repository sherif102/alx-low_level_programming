#include "lists.h"
#include <stdlib.h>
/**
 * get_nodeint_at_index - finds nth node
 * @head: parsed head
 * @index: index to search for
 * Return: nth node or null if not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	size_t n = 0;

	while (n < index)
	{
		temp = temp->next;
		n++;
	}
	return (temp);
}
