def main():
    t = int(input())
    ans = []
    while t:
        n = int(input())
        a = [int(input()) for i in range(n)]
        b = [int(input()) for i in range(n)]
        mina = min(a)
        minb = min(b)
        res = 0
        for i in range(n):
            res += max(a[i]-mina, b[i]-minb)
        ans.append(res)
        t -= 1
    for i in ans:
        print(i)


if __name__ == "__main__":
    main()
