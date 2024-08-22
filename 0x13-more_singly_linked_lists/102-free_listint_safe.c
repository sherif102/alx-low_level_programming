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
	listint_t *temp = *h;

	if (h == NULL || *h == NULL)
		return (0);

	while (*h != NULL)
	{
		node_count++;
		temp = (*h)->next;

		if (*h <= temp)
		{
			free(*h);
			*h = NULL;
			break;
		}
		free(*h);
		*h = temp;
	}

	return (node_count);
}
