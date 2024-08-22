#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_listint_safe - print a list in safe version
 * @head: parsed head
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t node_count = 0;
	const listint_t *temp = head;
	const listint_t *loop_check = head;

	if (temp->next == NULL && temp != NULL)
	{
		printf("[%p] %d\n", (void *)temp, temp->n);
		node_count++;
		return (node_count);
	}

	while (temp != NULL)
	{
		node_count++;

		printf("[%p] %d\n", (void *)temp, temp->n);
		temp = temp->next;

		if (loop_check != NULL && loop_check->next != NULL)
		{
			loop_check = loop_check->next->next;
			if (loop_check == head || loop_check == temp)
			{
				printf("-> [%p] %d\n", (void *)temp, temp->n);
				exit(98);
			}
		}
	}
	return (node_count);
}
