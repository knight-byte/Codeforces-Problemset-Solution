def solution(a, b):
    res = 0
    if a % b == 0:
        return 0
    else:
        return b-a % b


def main():
    col = 2
    row = int(input())
    arr = [[0 for j in range(col)] for i in range(row)]
    for i in range(row):
        for j in range(col):
            arr[i][j] = int(input())
    sol = []
    for i in range(row):
        sol.append(solution(arr[i][0], arr[i][1]))


if __name__ == "__main__":
    main()
