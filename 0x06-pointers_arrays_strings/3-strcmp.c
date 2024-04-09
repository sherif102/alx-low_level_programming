#include "main.h"
#include <stdio.h>
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
	int l = *s1;
	int ri = *s2;

	r = l - ri;

	if (l < ri)
		r = r + 0;
	else if (l > ri)
		r = r + 0;
	else
		r = 0;

	return (r);
}
