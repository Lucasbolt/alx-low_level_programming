#!/usr/bin/python3
"""
Defines the island perimeter calculator.
"""


def island_perimeter(grid):
    """
    function for calculating the perimeter of an island given as grid.
    grid is a list of list of integers with 0s representing water and
    1's representing land.
    """
    perimeter = 0
    if len(grid) == 0:
        return perimeter
    rows, cols = len(grid), len(grid[0])
    for row in range(rows):
        for col in range(cols):
            if grid[row][col] == 1:
                perimeter += 4

                if row > 0:
                    if grid[row-1][col] == 1:
                        perimeter -= 2
                if col > 0:
                    if grid[row][col-1] == 1:
                        perimeter -= 2
    return perimeter
