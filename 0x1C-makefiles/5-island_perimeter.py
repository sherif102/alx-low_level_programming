#!/usr/bin/python3
"""
Module: 5-island_perimeter.py
Author: Sheriff Abdulfatai
"""


def island_perimeter(grid):
    """ a function that return the perimeter of the
    island described in grid """
    column_count = 0
    row_count = 0
    column = 0
    row = 0
    if len(grid) < 1 or len(grid) > 100:
        return 0
    for i in grid:
        if len(i) < 1 or len(i) > 100:
            return 0
        for j in i:
            if j == 1:
                column_count += 1

        if column < column_count:
            column = column_count
        if column_count > 0:
            row += 1

        column_count = 0

    return ((column * 2) + (row * 2))
