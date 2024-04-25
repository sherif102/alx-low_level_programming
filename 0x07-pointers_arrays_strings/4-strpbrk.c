#include "main.h"
/*
 * 4-strpbrk.c
 *
 *  Created on: Apr 14, 2024
 *      Author: absheriff
 */
/**
 * _strpbrk - searches for set of bits
 * @s: string to be searched
 * @accept: where to search
 * Return: success
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int y = 0;
	unsigned int j = 0;

	while (accept[y] != '\0')
		y++;

	while (s[i] != '\0')
	{
		while (j < y)
		{
			if (s[i] == accept[j])
				break;
			j++;
		}
		if (s[i] == accept[j])
			break;

		j = 0;
		i++;
	}
	if ((s[i] != accept[j]) || (s[i] == '\0'))
		s = '\0';
	else
		s = s + i;

	return (s);
}
