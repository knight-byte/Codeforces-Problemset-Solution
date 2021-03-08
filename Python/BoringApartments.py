def main():
    t = int(input())
    res = []
    while t:
        t -= 1
        x = input()
        if x == "1":
            res.append(1)
        else:
            digit = ord(x[0])-ord('0')
            ans = (digit-1)*10
            for i in range(len(x)):
                ans += i
            res.append(ans)
    for i in res:
        print(i)


if __name__ == '__main__':
    main()
