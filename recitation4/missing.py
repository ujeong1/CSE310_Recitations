import math


def Missing(A, n):
    left = 0
    right = n - 2
    while (left < right):
        middle = math.floor((left + right) / 2)

        if (A[middle] == middle + 1):
            left = middle + 1
        else:
            right = middle - 1

    if (A[left] == left + 1):
        return left + 2
    else:
        return left + 1


def MissingR(A, left, right):
    range = right - left
    # Division
    if (range > 0):
        middle = math.floor((left + right) / 2)

        if A[middle] == middle + 1:
            return MissingR(A, middle + 1, right)

        else:
            return MissingR(A, left, middle - 1)
    # Base_case
    else:
        if (A[left] == left + 1):
            return left + 2
        else:
            return left + 1

if __name__ == "__main__":
    arr = [1, 2, 4, 5, 6, 7, 8, 9]
    print(Missing(arr, len(arr)) - 1)
    print(MissingR(arr, 0, len(arr)) - 1)
