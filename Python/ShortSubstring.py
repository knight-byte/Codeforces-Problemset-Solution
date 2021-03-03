def main():
    t = int(input())
    while t:
        a = input()
        b = a[:2]
        for i in range(3, len(a), 2):
            b += a[i]
        print(b)
        t -= 1


if __name__ == '__main__':
    main()
