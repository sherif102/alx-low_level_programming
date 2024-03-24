#include "main.h"
/*
 * 6-abs.c
 *
 *  Created on: Jan 7, 2024
 *      Author: absheriff
 */
/**
 * _abs - prints the absolute value
 * Return: success
 * @r: return value
 */
int _abs(int r)
{
	if (r < 0)
	{
		return (-(r));
	}
	else
	{
		return (+(r));
	}
}
