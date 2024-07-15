#include "main.h"
#include <stdlib.h>
/*
 * 1-strdup.c
 *
 *  Created on: Jul 15, 2024
 *      Author: hyper
 * _strdup - returns pointer to newly allocated memory space
 * @str: new string
 * Return: pointer to string if success otherwise NULL
 */
char *_strdup(char *str)
{
	char *s;
	int x = 0;

	s = malloc(sizeof(char) * sizeof(str));

	if (str == NULL)
		return (NULL);

	while (str[x] != '\0')
	{
		*(s + x) = str[x];
		x++;
	}
	return (s);
}
