#include "main.h"
/*
 * 0-memset.c
 *
 *  Created on: Apr 13, 2024
 *      Author: absheriff
 */
/**
 * _memset - fills the memory with a constant byte
 * @s: buffer location
 * @b: buffer content
 * @n: number of buffers to be filled
 * Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
