#!/usr/bin/python3
"""Program that discover the perimeter of an island depends on grid"""


def count_edge(grid, i, j):
    """Returns the number of water neighbors a cell has in a grid."""

    edge = 0

    if i <= 0 or not grid[i - 1][j]:
        edge += 1
    if j <= 0 or not grid[i][j - 1]:
        edge += 1
    if j >= len(grid[i]) - 1 or not grid[i][j + 1]:
        edge += 1
    if i >= len(grid) - 1 or not grid[i + 1][j]:
        edge += 1

    return edge


def island_perimeter(grid):
    """Returns the perimeter of the island in grid."""

    perim = 0
    r = len(grid)

    for i in range(r):
        c = len(grid[i])
        for j in range(c):
            if grid[i][j] == 1:
                perim += count_edge(grid, i, j)

    return perim
