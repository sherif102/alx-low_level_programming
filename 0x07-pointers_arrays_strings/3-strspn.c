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

	unsigned int y = 0;

	while (accept[y] != '\0')
		y++;

	y++;

	return (y);
}
