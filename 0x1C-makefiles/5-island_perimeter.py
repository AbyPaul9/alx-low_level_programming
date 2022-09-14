#!/usr/bin/python3
""" island module """


def island_perimeter(grid):
    """
       calculate the island perimeter
       Args:
           grid: map
    """

    peri = 0

    for row in range(len(grid)):
        for column in range(len(grid[row])):
            if grid[row][column] == 1:
                if row == 0 or grid[row - 1][column] == 0:
                    peri += 1
                if column == 0 or grid[row][column - 1] == 0:
                    peri += 1
                if row == len(grid) - 1 or grid[row + 1][column] == 0:
                    peri += 1
                if column == len(grid[row]) - 1 or grid[row][column + 1] == 0:
                    peri += 1
    return peri
