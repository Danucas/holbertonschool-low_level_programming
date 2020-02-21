#!/usr/bin/python3
""" Island perimeter module """


def island_perimeter(grid):
    """ Island perimeter function """
    count = 0
    for y in range(1, len(grid)):
        for x in range(1, len(grid[y])):
            if (grid[y][x] == 1):
                ch_left = grid[y][x - 1]
                ch_right = grid[y][x + 1]
                ch_up = grid[y - 1][x]
                ch_down = grid[y + 1][x]
                count += 4 - (ch_left + ch_right + ch_up + ch_down)
    return count


if __name__ == "__main__":
    main()
