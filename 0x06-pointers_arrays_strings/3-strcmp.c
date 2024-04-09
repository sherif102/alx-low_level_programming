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
 * Return:
 */
int _strcmp(char *s1, char *s2)
{
	int r;

	if (s1 > s2)
		r = s1 - s2;
	else if (s1 < s2)
		r = s2 - s1;
	else
		r = 0;

	return (r);
}
