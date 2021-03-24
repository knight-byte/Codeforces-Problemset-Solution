def main():
    t = int(input())
    while t:
        t -= 1
        b, p, f = map(int, input().split(" "))
        h, c = map(int, input().split(" "))
        profit = 0
        b /= 2
        if h < c:
            h, c = c, h
            p, f = f, p
        cnt = min(b, p)
        b -= cnt
        p -= cnt
        profit += h*cnt
        cnt = min(b, f)
        b -= cnt
        f -= cnt
        profit += c*cnt
        print(profit)


if __name__ == '__main__':
    main()
