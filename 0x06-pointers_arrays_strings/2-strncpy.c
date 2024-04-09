#include "main.h"
/*
 * 2-strncpy.c
 *
 *  Created on: Apr 8, 2024
 *      Author: absheriff
 */
/**
 * _strncpy - copies string from src to dest
 * @dest: string destination
 * @src: string source
 * @n: bits copied
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
