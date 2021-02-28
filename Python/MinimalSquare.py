def main():
    t = int(input())
    ans = []
    while t:
        a = int(input())
        b = int(input())
        side = min(max(2*a, b), max(a, 2*b))
        ans.append(side)
        t -= 1
    for i in ans:
        print(i)


if __name__ == '__main__':
    main()
