#!/usr/bin/python3
""" Island perimeter module """


def island_perimeter(grid):
    """ Island perimeter function """
    count = 0
    ing = False
    for y in range(1, len(grid)):
        for x in range(1, len(grid[y])):
            if (grid[y][x] == 1):
                ing = True
                ch_left = grid[y][x - 1]
                ch_right = grid[y][x + 1]
                ch_up = grid[y - 1][x]
                ch_down = grid[y + 1][x]
                count += 4 - (ch_left + ch_right + ch_up + ch_down)
            else:
                if ing is True:
                    break
    return count


if __name__ == "__main__":
    main()
