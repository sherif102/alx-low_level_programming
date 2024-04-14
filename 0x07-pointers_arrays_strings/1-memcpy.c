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
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
