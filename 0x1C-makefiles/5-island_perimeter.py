#!/usr/bin/python3
"""Define an island perimeter measuring function."""


def island_perimeter(grid):
    """Return the perimiter of an island.

    Args:
        grid : A list of list of integers representing an island.
    """
    w = len(grid[0])
    h = len(grid)
    x = 0
    y = 0

    for i in range(h):
        for j in range(w):
            if grid[i][j] == 1:
                y += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    x += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    x += 1
    return y * 4 - x * 2
