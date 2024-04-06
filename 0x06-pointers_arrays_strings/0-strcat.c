#include "main.h"
/*
 * 0-strcat.c
 *
 *  Created on: Apr 4, 2024
 *      Author: absheriff
 */
/**
 * _strcat - concatenates strings together
 * @dest: string destination
 * @src: string source
 * Return: pointer to the destination
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int x = 0;

	while (dest[x] != '\0')
		x++;

	while (src[i] != '\0')
	{
		dest[x] = src[i];
		x++;
		i++;
	}

	return (dest);
}
