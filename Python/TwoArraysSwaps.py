def main():
    t = int(input())
    for _ in range(t):
        n, k = map(int, input().split())
        a = sorted(list(map(int, input().split())))
        b = sorted(list(map(int, input().split())), reverse=True)
        for i in range(k):
            if a[i] >= b[i]:
                break
            a[i] = b[i]
        print(sum(a))


if __name__ == '__main__':
    main()
