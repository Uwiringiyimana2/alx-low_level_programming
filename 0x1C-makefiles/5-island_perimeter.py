#!/usr/bin/python3
"""Defines an island perimeter"""

def island_perimeter(grid):
    """Return perimeter of an island.

    Args:
        grid (list): A list of list of integers representing an island.

    Returns:
        The perimeter of the island defined in grid.
    """
    width = len(grid[0])
    height = len(grid)
    perimeter = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                perimeter += 4
                if (j > 0 and grid[i][j - 1] == 1):
                    perimeter -= 2
                if (j > 0 and grid[i - 1][j] == 1):
                    perimeter -= 2
    return perimeter
