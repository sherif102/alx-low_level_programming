#include "main.h"
/*
 * 0-strcat.c
 *
 *  Created on: Apr 4, 2024
 *      Author: absheriff
 */
/**
 * _strncat - concatenates strings together
 * @dest: string destination
 * @src: string source
 * Return: pointer to the destination
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int x = 0;

	while (dest[x] != '\0')
		x++;

	while (i < n)
	{
		if (src[i] == '\0')
			break;

		dest[x] = src[i];
		x++;
		i++;
	}

	return (dest);
}
