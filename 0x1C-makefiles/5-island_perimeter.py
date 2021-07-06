#!/usr/bin/python3
"""
Module 5-island_perimeter
Returns the perimeter of  the island described in grid
"""


def island_perimeter(grid):
    """
    Returns the perimeter of the grid defined by '1'
    """
    maxWidth = 0
    length = 0
    for i in range(len(grid)):
        width = 0
        for j in range(len(grid[0])):
            if grid[i][j] == 1:
                width += 1
        if width:
            length += 1
        if width > maxWidth:
            maxWidth = width
    return ((maxWidth + length) * 2)
