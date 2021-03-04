def main():
    col = 2
    row = int(input())
    arr = [[int(input()) for i in range(col)] for j in range(row)]
    sol = []

    for i in range(row):
        a = arr[i][0]
        b = arr[i][1]
        d = 0
        if a == b:
            sol.append(0)
            continue
        else:
            d = abs(a-b)
            sol.append((d+9)/10)

    for i in sol:
        print(i)


if __name__ == '__main__':
    main()
