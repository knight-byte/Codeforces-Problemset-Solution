def main():
    n = int(input())
    a = [int(input()) for i in range(n)]
    cnt = 0
    inc = 0
    maxcount = 0
    for i in range(n):
        if a[i] > inc:
            cnt += 1
            inc = a[i]
            if cnt > maxcount:
                maxcount = cnt
        else:
            cnt = 1
            inc = a[i]
    print(maxcount)


if __name__ == '__main__':
    main()
