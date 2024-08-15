#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - add a new node to the end of the list
 * @head: the head node
 * @str: data added
 * Return: address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	size_t x = 0;
	list_t *temp;

	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	while (new_node->str[x] != '\0')
		x++;
	new_node->len = x;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;

	temp->next = new_node;
	return (new_node);
}
