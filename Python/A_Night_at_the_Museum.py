def main():
    s = input()
    pre = "a"
    cnt = 0
    for i in s:
        diff = abs(ord(pre)-ord(i))
        if diff < 13:
            cnt += diff
        else:
            cnt += (26-diff)
        pre = i
    print(cnt)


if __name__ == '__main__':
    main()
