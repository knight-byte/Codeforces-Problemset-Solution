def main():
    t = int(input())
    while t:
        t -= 1
        n, m = map(int, input().split())
        a = [int(input()) for i in range(n)]
        b = [int(input()) for i in range(m)]
        cnt = 0
        for i in range(n):
            for j in range(m):
                if a[i] == b[j]:
                    cnt += 1
        print(cnt)


if __name__ == '__main__':
    main()
