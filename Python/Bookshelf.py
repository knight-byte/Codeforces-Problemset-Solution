def main():
    t = int(input())
    while t:
        t -= 1
        n = int(input())
        a = [int(input()) for i in range(n)]
        while a[-1] == 0:
            a.pop()
        a = sorted(a, reverse=True)
        while a[-1] == 0:
            a.pop()
        coun = a.count(0)
        print(coun)


if __name__ == '__main__':
    main()
