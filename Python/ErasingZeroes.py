def main():
    t = int(input())
    while t:
        t -= 1
        s = input()
        l = 0
        r = 0
        if len(s) == 1 or len(s) == 2 or s.count("1") <= 1:
            print(0)
            continue
        for i in range(len(s)):
            if s[i] == "1":
                l = i
                break
        for i in range(len(s), -1, -1):
            if s[i] == "1":
                r = i
                break
        cou = 0
        for i in range(l, r):
            if s[i] == "0":
                cou += 1
        print(cou)


if __name__ == '__main__':
    main()
