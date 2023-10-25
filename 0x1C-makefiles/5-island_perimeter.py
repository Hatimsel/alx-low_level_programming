#!/usr/bin/python3
"""
Island Perimtere
"""


def island_perimeter(grid):
    """
    Returns the perimeter of the island described in grid
    """
    if grid == 0 or not grid:
        return 0

    perimeter = 0
    rows = len(grid)
    columns = len(grid[0])

    for row in range(rows):
        for column in range(columns):
            if grid[row][column] == 1:
                perimeter += 4

                if row > 0 and grid[row - 1][column] == 1:
                    perimeter -= 1
                if row < rows - 1 and grid[row + 1][column] == 1:
                    perimeter -= 1
                if column > 0 and grid[row][column - 1] == 1:
                    perimeter -= 1
                if column < columns - 1 and grid[row][column + 1] == 1:
                    perimeter -= 1

    return perimeter
