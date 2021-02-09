import math


def dist(A, B, n):
    d = 0
    for i in range(0, n - 1):
        if ((A[i] != B[i]) and (A[i + 1] != B[i + 1])):
            d = d + 1

    return d


def distR(A, B, left, right):
    range = right - left
    # Division
    if (range > 1):
        middle = math.floor((left + right) / 2)
        return distR(A, B, left, middle) + distR(A, B, middle, right)

    # Base_case
    else:
        if ((A[left] != B[left]) and (A[left + 1] != B[left + 1])):
            return 1
        else:
            return 0

if __name__ == "__main__":
    A = [0,1,1,0,0]
    B = [1,1,0,1,1]
    print(dist(A, B, len(A)))
    print(distR(A, B, 0, len(A) - 1))
