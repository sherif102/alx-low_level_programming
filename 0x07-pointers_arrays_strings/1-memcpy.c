#include "main.h"
/*
 * 1-memcpy.c
 *
 *  Created on: Apr 14, 2024
 *      Author: absheriff
 */
/**
 * _memcpy - copies memory area
 * @dest: copy destination
 * @src: copy source
 * @n: copy number
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
