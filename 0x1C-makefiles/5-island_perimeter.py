#!/usr/bin/python3
"""Define the island perimeter of measuring function."""


def island_perimeter(grid):
    """Returning a perimiter of the island.
    A grid representing water by 0 and the land by 1.
    Args:
        grid (list): The list of list of the integers representing island.
    Returns:
        A perimeter of an island defined in the grid.
    """
    width = len(grid[0])
    height = len(grid)
    edges = 0
    size = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                size += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    edges += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    edges += 1
    return size * 4 - edges * 2
