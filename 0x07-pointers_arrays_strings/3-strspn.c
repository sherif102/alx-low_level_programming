#include "main.h"
/*
 * 3-strspn.c
 *
 *  Created on: Apr 14, 2024
 *      Author: absheriff
 */
/**
 * _strspn - gets the length of prefix substring
 * @s: string segment to work on
 * @accept: bytes to be used
 * Return: success
 */
unsigned int _strspn(char *s, char *accept)
{
	/*unsigned int i = 0;
	unsigned int x;*/
	unsigned int y = 0;
	/*unsigned int j = 0;*/

	while (accept[y] != '\0')
		y++;
	y++;

/*	while (s[i] != '\0')
	{
		for (x = 0; x < y; x++)
		{
			if (s[i] == accept[x])
				j++;
		}
		i++;
	}
	*/

	return (y);
}
