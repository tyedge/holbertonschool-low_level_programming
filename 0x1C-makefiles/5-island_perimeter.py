#!/usr/bin/python3
"""
This module defines the function island_perimeter, which takes in a grid and
determines the perimeter of the island described in grid
"""


def island_perimeter(grid):
    """ This function calculates and returns the perimeter of the island
    in grid """

    perim = 0
    topbot = 0
    sides = 0

    if not grid:
        return perim

    for row in range(len(grid)):
        for col in range(len(grid[row])):
            if (grid[row][col] == 1):
                topbot = count_topbot(grid, row, col)
                sides = count_sides(grid, row, col)
                perim += (topbot + sides)
    return perim


def count_topbot(grid, row, col):
    """ This functions counts the top and bottom sides in island """
    topbot = 0
    if (row + 1 >= len(grid) or grid[row + 1][col] == 0):
        topbot += 1
    if (row - 1 < 0 or grid[row - 1][col] == 0):
        topbot += 1
    return topbot


def count_sides(grid, row, col):
    """ This functions counts the left and right sides in island """
    sides = 0
    if (col - 1 < 0 or grid[row][col - 1] == 0):
        sides += 1
    if (col + 1 >= len(grid[row]) or grid[row][col + 1] == 0):
        sides += 1
    return sides
