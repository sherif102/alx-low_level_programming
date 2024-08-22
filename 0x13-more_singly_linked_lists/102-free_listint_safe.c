#include "lists.h"
#include <stdlib.h>
/**
 * free_listint_safe - frees all members in a list
 * @h: head parsed
 * Return: size of the elements freed
 */
size_t free_listint_safe(listint_t **h)
{
	size_t node_count = 0;
	listint_t *next = *h;

	while (next != NULL)
	{
		node_count++;
		*h = next;
		next = next->next;
		free(*h);
	}
	free(next);
	*h = NULL;

	return (node_count);
}
