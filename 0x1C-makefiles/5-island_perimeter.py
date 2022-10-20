#!/usr/bin/python3
"""
module for island grid perimeter
"""


def island_perimeter(grid):
    ''' defines island grid method '''
    val = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                val += 2
                if i > 0 and grid[i - 1][j] == 1:
                    val -= 1
                if j > 0 and grid[i][j - 1] == 1:
                    val -= 1
    return (val * 2)
