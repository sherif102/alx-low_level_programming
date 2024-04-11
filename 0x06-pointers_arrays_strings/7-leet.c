#include "main.h"
/*
 * 7-leet.c
 *
 *  Created on: Apr 11, 2024
 *      Author: absheriff
 */
/**
 * leet - encodes the given string to 1337
 * @c: given string
 * Return: encoded string pointer
 */
char *leet(char *c)
{
	int i = 0;

	while (c[i] != '\0')
	{
		if ((c[i] == 'a') || (c[i] == 'A'))
			c[i] = 52;
		else if ((c[i] == 'e') || (c[i] == 'E'))
			c[i] = 51;
		else if ((c[i] == 'o') || (c[i] == 'O'))
			c[i] = 48;
		else if ((c[i] == 't') || (c[i] == 'T'))
			c[i] = 55;
		else if ((c[i] == 'l') || (c[i] == 'L'))
			c[i] = 49;

		i++;
	}

	return (c);
}
