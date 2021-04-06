def main():
    k, n, w = map(int, input().split())
    amt = 0
    for i in range(1, w+1):
        amt += i*k
    print(amt-n if amt > n else 0)


if __name__ == '__main__':
    main()
