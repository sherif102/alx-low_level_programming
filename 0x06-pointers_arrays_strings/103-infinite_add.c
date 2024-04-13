#include "main.h"
#include <stdlib.h>
/*
 * 103-infinite_add.c
 *
 *  Created on: Apr 13, 2024
 *      Author: absheriff
 */
/**
 * infinite_add - add two numbers together
 * @n1: first number
 * @n2: second number
 * @r: result
 * @size_r: size of r
 * Return: pointer to r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i;
	int j;
	int x;

	i = atoi(n1);
	j = atoi(n2);
	x = i + j;

	sprintf(r, "%d", x);
	return (r);
}
