#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node - add nodes to the begining of a list
 * @head: head node
 * @str: data in the node
 * Return: new element address
 */
list_t *add_node(list_t **head, const char *str)
{
	size_t x = 0;

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
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
