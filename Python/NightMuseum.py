def main():
    s = input()
    cnt = 0
    for i in range(len(s)):
        if i == 0:
            dif = abs(ord("a")-ord(s[i]))
            if dif < 13:
                cnt += dif
            else:
                cnt += (26-dif)
        else:
            dif = abs(ord(s[i-1])-ord(s[i]))
            if dif < 13:
                cnt += dif
            else:
                cnt += (26-dif)
    print(cnt)


if __name__ == '__main__':
    main()
