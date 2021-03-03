def main():
    t = int(input())
    ans = []
    while t:
        x = int(input())
        y = int(input())
        n = int(input())
        if n-n % x+y <= n:
            ans.append(n-n % x+y)
        else:
            ans.append(n-n % x-(x-y))
        t -= 1

    for i in ans:
        print(i)


if __name__ == '__main__':
    main()
