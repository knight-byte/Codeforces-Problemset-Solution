def main():
    t = int(input())
    while t:
        t -= 1
        n = int(input())
        a = [int(input()) for i in range(n)]
        ans = n-a.count(min(a))
        print(ans)


if __name__ == '__main__':
    main()
