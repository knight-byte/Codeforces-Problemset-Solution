def main():
    n = int(input())
    t = int(input())
    s = input()
    ans = []
    while t > 0:
        for i in range(n-1):
            if s[i] == "B" and s[i+1] == "G":
                s[i], s[i+1] = s[i+1], s[i]
                i += 1
        t -= 1

    print(s)


if __name__ == '__main__':
    main()
