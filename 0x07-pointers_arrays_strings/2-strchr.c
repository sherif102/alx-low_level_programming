#include "main.h"
/*
 * 2-strchr.c
 *
 *  Created on: Apr 14, 2024
 *      Author: absheriff
 */
/**
 * _strchr - locates a character in a string
 * @s: pointer to the first character (c) occurrence
 * @c: character to locate
 * Return: success
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			break;
		i++;
	}

	return (s + i);
}
