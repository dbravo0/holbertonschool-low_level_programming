#!/usr/bin/python3
"""Module for calculate the island's grid perimeter"""


def island_perimeter(grid):
    i = 0
    for y in range(len(grid)):
        for x in range(len(grid[y])):
            if grid[y][x] == 1:
                if y == 0 or grid[y - 1][x] == 0:
                    i += 1
                if y == len(grid) - 1 or grid[y + 1][x] == 0:
                    i += 1
                if x == 0 or grid[y][x - 1] == 0:
                    i += 1
                if x == len(grid[y]) - 1 or grid[y][x + 1] == 0:
                    i += 1
    return i
