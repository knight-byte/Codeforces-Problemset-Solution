def main():
    n, m = map(int, input().split())
    col = set()
    row = set()
    for i in range(n):
        for j in range(m):
            c = input()
            if c == "S":
                row.add(i)
                col.add(j)

    ans = n*m-len(col)*len(row)
    print(ans)


if __name__ == '__main__':
    main()
