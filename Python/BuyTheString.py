def main():
    t = int(input())
    while t:
        t -= 1
        n, c0, c1, h = map(int, input().split())
        coins = 0
        s = input()
        for i in range(n):
            if s[i] == "0":
                coins += min(c0, h+c1)
            else:
                coins += min(c1, h+c0)
        print(coins)


if __name__ == '__main__':
    main()
