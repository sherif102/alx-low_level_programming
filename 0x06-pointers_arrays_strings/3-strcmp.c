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
	int r1 = 0;
	int r2 = 0;
	int i = 0;
	int j = 0;
	int r;

	while (s1[i] != '\0')
	{
		r1 = r1 + s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		r2 = r2 + s2[j];
		j++;
	}

	if (r1 > r2)
		r = r1 - r2;
	else if (r1 == r2)
		r = 0;
	else
		r = r1 - r2;

	return (r);
}
