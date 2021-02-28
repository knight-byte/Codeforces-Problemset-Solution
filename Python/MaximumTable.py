def main():
    n = int(input())
    arr = [[0 for j in range(n)] for i in range(n)]
    for i in range(n):
        for j in range(n):
            if i == 0 or j == 0:
                arr[i][j] = 1
            else:
                arr[i][j] = arr[i-1][j]+arr[i][j-1]
    print(arr[-1][-1])


if __name__ == '__main__':
    main()
