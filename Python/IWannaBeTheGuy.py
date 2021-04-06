def main():
    n = int(input())
    x, *p = map(int, input().split())
    y, *q = map(int, input().split())
    ans = sorted(set(p+q))
    print("I become the guy." if len(ans) == n else "Oh, my keyboard!")


if __name__ == '__main__':
    main()
