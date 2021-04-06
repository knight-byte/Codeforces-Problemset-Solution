def main():
    n = int(input())
    scores = tuple(map(int, input().split()))
    ma = scores[0]
    mi = scores[0]
    ans = 0
    for i in scores:
        if ma < i:
            ans += 1
            ma = i
        elif mi > i:
            ans += 1
            mi = i
    print(ans)


if __name__ == '__main__':
    main()
