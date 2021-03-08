def main():
    t = int(input())
    while t:
        t -= 1
        n = int(input())
        m = int(input())
        ans = 0
        for i in range(1, n+1):
            for j in range(i, m+1):
                c = input()
                if c == "C":
                    continue
                if i == n and c == "D":
                    ans += 1
                if j == m and c == "R":
                    ans += 1
        print(ans)


if __name__ == '__main__':
    main()
