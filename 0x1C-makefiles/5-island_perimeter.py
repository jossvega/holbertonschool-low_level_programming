#!/usr/bin/python3
"""Program that discover the perimeter of an island depends on grid"""


def island_perimeter(grid):

    perim = 0
    col = len(grid)

    for i in range(col):
        row = len(grid[i])
        for j in range(row):
            if grid[i][j] == 1:
                if grid[i][j - 1] == 0:
                    perim += 1
                if grid[i - 1][j] == 0:
                    perim += 1
                if grid[i][j + 1] == 0:
                    perim += 1
                if grid[i + 1][j] == 0:
                    perim += 1
    return perim
