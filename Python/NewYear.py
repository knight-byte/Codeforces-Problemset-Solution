def main():
    col = 2
    totalMin = 1440
    row = int(input())
    arr = [[0 for j in range(col)] for i in range(row)]
    for i in range(row):
        for j in range(col):
            arr[i][j] = int(input())
    res = [totalMin - (arr[i][0]*60 + arr[i][1]) for i in range(row)]
    for i in res:
        print(i)


if __name__ == '__main__':
    main()
