def main():
    t = int(input())
    for _ in range(t):
        a, b = map(int, input().split())
        mi = min(a, b)
        ma = max(a, b)
        if mi*2 < ma:
            print(ma**2)
        else:
            print((mi*2)**2)


if __name__ == '__main__':
    main()
