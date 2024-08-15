#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
 * print_list - print elements in a list
 * @h: list passed
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t x = 0;
	const list_t *temp = h;

	while (temp != NULL)
	{
		if (temp->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", temp->len, temp->str);
		temp = temp->next;
		x++;
	}
	return (x);
}
