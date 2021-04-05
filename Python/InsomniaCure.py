def main():
    k = int(input())
    l = int(input())
    m = int(input())
    n = int(input())
    d = int(input())
    damaged = set()
    if d < k or d < l or d < m or d < n:
        print(0)
    elif 1 in [k, l, m, n]:
        print(d)
    else:
        for i in range(2, d+1):
            if i % k == 0:
                damaged.add(i)
            elif i % l == 0:
                damaged.add(i)
            elif i % m == 0:
                damaged.add(i)
            elif i % n == 0:
                damaged.add(i)
        print(len(damaged))


if __name__ == "__main__":
    main()
