def main():
    t = int(input())
    while t:
        n = int(input())
        a = 2**n
        b = 0
        for i in range(1, n/2):
            a += 2**i
        for i in range(n/2, n):
            b += 2**i
        print(abs(a-b))
        t -= 1


if __name__ == '__main__':
    main()
