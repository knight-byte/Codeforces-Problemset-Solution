def main():
    t = int(input())
    num = [i for i in range(10, 0, -1)]
    for _ in range(t):
        a, b = map(int, input().split())
        count = 0
        ab = abs(a-b)
        for i in num:
            if ab == 0:
                break
            if ab >= i:
                count += (ab//i)
                ab %= i

        print(count)


if __name__ == '__main__':
    main()
