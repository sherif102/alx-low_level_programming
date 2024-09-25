#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - print elements in a doubly linked list
 * @h: head parsed
 * Return: number of elements there
 */

size_t print_dlistint(const dlistint_t *h)
{
    size_t n = 0;
    const dlistint_t *temp;
    if (h == NULL)
        return (n);
    temp = h;
    while (temp != NULL)
    {
        printf("%d\n", temp->n);
        temp = temp->next;
        n++;
    }
    return (n);
}