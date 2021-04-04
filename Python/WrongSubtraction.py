def main():
    n, k = map(int, input().split())
    for _ in range(k):
        if str(n)[-1] == "0":
            n = int(str(n)[:-1])
        elif n > 0:
            n -= 1
    print(n)


if __name__ == '__main__':
    main()
