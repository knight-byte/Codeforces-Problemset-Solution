def main():
    s, t = map(str, input().split())
    cnt = 0
    j = 0
    for i in range(len(t)):
        if s[j] == t[i]:
            cnt += 1
            j += 1

    print(cnt+1)


if __name__ == '__main__':
    main()
