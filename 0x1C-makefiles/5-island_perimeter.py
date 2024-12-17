#!/usr/bin/python3
"""
Module: 5-island_perimeter.py
Author: Sheriff Abdulfatai
"""


def island_perimeter(grid):
    """ a function that return the perimeter of the
    island described in grid
    1 represent land and 0 represent water """
    perimeter = 0
    row = 0
    nc = len(grid[1]) - 1
    nr = len(grid) - 1
    if len(grid) < 1 or len(grid) > 100:
        return 0
    for i in range(len(grid)):
        if len(grid[row]) < 1 or len(grid[row]) > 100:
            return 0
        for j in range(len(grid[row])):
            if len(grid[row]) != len(grid[1]):
                return 0
            if grid[i][j] == 1:
                if i == 0 or grid[i - 1][j] == 0:
                    perimeter += 1
                if j == 0 or grid[i][j - 1] == 0:
                    perimeter += 1
                if i == nr or grid[i + 1][j] == 0:
                    perimeter += 1
                if j == nc or grid[i][j + 1] == 0:
                    perimeter += 1
        row += 1
    return perimeter
