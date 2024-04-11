#include "main.h"
/*
 * 5-string_toupper.c
 *
 *  Created on: Apr 11, 2024
 *      Author: absheriff
 */
/**
 * string_toupper - converts lowercase char to uppercase
 * @c: character to be converted
 * Return: converted char pointer
 */
char *string_toupper(char *c)
{
	int x = 0;

	while (c[x] != '\0')
	{
		if ((c[x] >= 97) && (c[x] <= 122))
			c[x] = c[x] - 32;

		x++;
	}

	return (c);
}
