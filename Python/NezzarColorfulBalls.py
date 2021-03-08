def main():
    t = int(input())
    while t:
        t -= 1
        n = int(input())
        a = [int(input()) for i in range(n)]
        sa = set(a)
        max = 0
        for i in sa:
            temp = a.count(i)
            if temp > max:
                max = temp
        print(max)


if __name__ == '__main__':
    main()
