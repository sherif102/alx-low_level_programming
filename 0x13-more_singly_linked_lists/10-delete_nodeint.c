#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - deletes node at given index
 * @head: parsed head
 * @index: index to be deleted
 * Return: 1 on success and -1 on failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	size_t i = 0;
	listint_t *temp = *head;

	listint_t *copy_temp;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}

	while (temp != NULL && i < index - 1)
	{
		temp = temp->next;
		i++;
	}
	if (temp == NULL || temp->next == NULL)
		return (-1);

	copy_temp = temp->next;;
	temp->next = copy_temp->next;
	free(copy_temp);

	return (1);
}
