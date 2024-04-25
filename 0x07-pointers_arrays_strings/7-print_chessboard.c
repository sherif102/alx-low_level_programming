#include "main.h"
/*
 * 7-print_chessboard.c
 *
 *  Created on: Apr 21, 2024
 *      Author: absheriff
 */
/**
 * print_chessboard - prints the chessboard in 8 by 8 matrix
 * @a: the chess data
 * Return: success
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
