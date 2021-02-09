import math
import numpy


def trominoR(board, single_L_tromino, col_up, col_buttom, row_left, row_right):
    col_range = col_buttom - col_up
    row_range = row_right - row_left
    square_area = (col_range+1) * (row_range+1)

    if (square_area > 2):
        col_middle = math.floor(col_range / 2) + col_up
        row_middle = math.floor(row_range / 2) + row_left

        return trominoR(board, single_L_tromino, col_up, col_middle, row_left, row_middle) + \
               trominoR(board, single_L_tromino, col_up, col_middle, row_middle + 1, row_right) + \
               trominoR(board, single_L_tromino, col_middle + 1, col_buttom, row_left, row_middle) + \
               trominoR(board, single_L_tromino, col_middle + 1, col_buttom, row_middle + 1, row_right)

    else:
        puzzle = numpy.logical_or(single_L_tromino, board[col_up:col_up + 2, row_left:row_left + 2])

        if puzzle.all() == True:
            return numpy.array([col_up, row_right])

        else:
            return numpy.array([0, 0])


if __name__ == "__main__":
    n = int(math.pow(2, 3))
    board = [[0, 0, 0, 0, 0, 0, 0, 0],
             [0, 0, 0, 0, 0, 0, 0, 0],
             [0, 0, 0, 0, 0, 0, 1, 0],
             [0, 0, 0, 0, 0, 0, 0, 0],
             [0, 0, 0, 0, 0, 0, 0, 0],
             [0, 0, 0, 0, 0, 0, 0, 0],
             [0, 0, 0, 0, 0, 0, 0, 0],
             [0, 0, 0, 0, 0, 0, 0, 0]]
    single_L_tromino = [[1, 0],
                        [1, 1]]
    board = numpy.array(board)
    single_L_tromino = numpy.array(single_L_tromino)
    print(trominoR(board, single_L_tromino, 0, n - 1, 0, n - 1))
