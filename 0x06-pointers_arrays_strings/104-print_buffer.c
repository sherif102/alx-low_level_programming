#include "main.h"
/*
 * 104-print_buffer.c
 *
 *  Created on: Apr 13, 2024
 *      Author: absheriff
 */
/**
 * print_buffer - prints buffer size from the input
 * @b: supplied buffer
 * @size: bytes to be printed
 * Return: success
 */
void print_buffer(char *b, int size)
{
	int i;

	for (i = 0; i < size; i++)
	{
		if (((i % 10) == 0) && (i > 0))
			_putchar('\n');

		_putchar(b[i]);
	}
}
