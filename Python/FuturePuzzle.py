def main():
    t = int(input())
    while t:
        t -= 1
        n = int(input())
        a = input()
        b = "1"
        for i in range(1, n):
            if '1'+a[i] != b[i-1]+a[i-1]:
                b += "1"
            else:
                b += "0"
        print(b)


if __name__ == '__main__':
    main()
