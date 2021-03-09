def main():
    n = int(input())
    s = input()
    cnt = s.count("x")
    if cnt == n:
        print(n-2)
    else:
        ans = 0
        sub = 0
        for i in range(n):
            if s[i] == "x":
                sub += 1
            else:
                sub = 0
            if sub > 2:
                ans += 1
        print(ans)


if __name__ == '__main__':
    main()
