/*
 * 1-isdigit.c
 *
 *  Created on: Feb 2, 2024
 *      Author: absheriff
 */

/**
 * _isdigit - checks for digit input
 * @c: input value
 * Return: 1 if c is digit otherwise 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
