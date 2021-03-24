def main():
    n = int(input())
    a = [int(input()) for i in range(n)]
    for i in range(n):
        if a[i] % 2 == 0:
            a[i] = a[i]-1
    for i in a:
        print(i, end=" ")
    print()


if __name__ == '__main__':
    main()
