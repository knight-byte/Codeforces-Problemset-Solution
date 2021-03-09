def solution(a, b):
    res = 0
    if a % b == 0:
        return 0
    elif a % b != 0:
        res = b-a % b
    return res


def main():
    col = 2
    row = int(input())
    arr = [[int(input()) for i in range(col)] for j in range(row)]
    for i in range(row):
        print(solution(arr[i][0], arr[i][1]))


if __name__ == '__main__':
    main()
