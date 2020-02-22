#!/usr/bin/python3
""" Island perimeter module """


def island_perimeter(grid):
    """ Island perimeter function """
    count = 0
    for y in range(len(grid)):
        for x in range(len(grid[y])):
            if grid[y][x] == 1:
                ch_left = grid[y][x - 1] if x > 0 else 0
                ch_right = 0 if x == len(grid[x]) - 1 else grid[y][x + 1]
                ch_up = grid[y - 1][x] if y > 0 else 0
                ch_down = 0 if y == len(grid) - 1 else grid[y + 1][x]
                count += 4 - (ch_left + ch_right + ch_up + ch_down)
    return count


if __name__ == "__main__":
    main()
