def main():
    t = int(input())
    sol = []
    while t:
        t -= 1
        n = int(input())
        k = int(input())
        a = sorted([int(input()) for i in range(n)])
        b = sorted([int(input()) for i in range(n)])
        ans = 0
        for i in range(n):
            if i < k:
                ans += max(a[i], b[i])
            else:
                ans += a[i]

        sol.append(ans)
    for i in sol:
        print(i)


if __name__ == '__main__':
    main()
