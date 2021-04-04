def main():
    n, k = map(int, input().split())
    if (2*k)-1 > n:
        x = (n+1)//2 if n % 2 != 0 else n//2
        print(2*(k-x))
    else:
        print((2*k)-1)


if __name__ == '__main__':
    main()
