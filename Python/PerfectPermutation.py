def main():
    n = int(input())
    a = [i+1 for i in range(n)]
    if n == 1 or n % 2 != 0:
        print(-1)
    else:
        for i in range(0, n-1, 2):
            a[i], a[i+1] = a[i+1], a[i]
        for i in a:
            print(i, end=" ")
        print()


if __name__ == '__main__':
    main()
