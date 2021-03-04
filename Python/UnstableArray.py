def main():
    t = int(input())
    sol = []
    while t:
        n = int(input())
        m = int(input())
        res = min(2, n-1)*m
        sol.append(res)
        t -= 1
    for i in sol:
        print(i)


if __name__ == '__main__':
    main()
