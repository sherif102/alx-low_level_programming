#include "main.h"
/*
 * 9-strcpy.c
 *
 *  Created on: Mar 27, 2024
 *      Author: absheriff
 */
/**
 * _strcpy - copy strings from one location to another
 * @dest: string destination
 * @src: string source
 * x: iterator
 * xc: copied iterator
 */
char *_strcpy(char *dest, char *src)
{
	int x = 0;
	int xc = 0;

	while (src[x] != '\0')
		x++;

	while (xc <= x)
	{
		dest[xc] = src[xc];
		xc++;
	}

	dest[xc + 1] = '\0';

	return (dest);
}
