#include "main.h"
/*
 * 3-strcmp.c
 *
 *  Created on: Apr 9, 2024
 *      Author: absheriff
 */
/**
 * _strcmp - compares two strings
 * @s1: string 1
 * @s2: string 2
 * Return: compared result
 */
int _strcmp(char *s1, char *s2)
{
	int r;

	r = *s1 - *s2;

	if (*s1 < *s2)
		r = r + 0;
	else if (*s1 > *s2)
		r = r + 0;
	else
		r = 0;

	return (r);
}
