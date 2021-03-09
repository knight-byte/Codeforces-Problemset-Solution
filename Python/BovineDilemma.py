def main():
    t = int(input())
    while t:
        t -= 1
        n = int(input())
        a = [int(input()) for i in range(n)]
        s = set()
        for i in range(n):
            for j in range(i+1, n):
                s.add(a[j]-a[i])
        print(len(s))


if __name__ == '__main__':
    main()
