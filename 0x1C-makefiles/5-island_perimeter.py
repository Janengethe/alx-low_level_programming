#!/usr/bin/python3
"""
Module 5-island_perimeter
Returns the perimeter of  the island described in grid
"""


def island_perimeter(grid):
    """
    Returns the perimeter of the grid defined by '1'
    """
    count, repeat = 0, 0

    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                count += 1
                if i != 0 and grid[i - 1][j] == 1:
                    repeat += 1
                if j != 0 and grid[i][j - 1] == 1:
                    repeat += 1

    return 4*count - 2*repeat
