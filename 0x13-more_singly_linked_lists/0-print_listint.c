#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_listint - prints all element in a list
 * @h: function parsed
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	const listint_t *temp = h;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		n++;
	}
	return (n);
}
