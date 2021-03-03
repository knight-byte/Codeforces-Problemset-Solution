def main():
    t = int(input())
    ans = []
    while t:
        n = int(input())
        m = int(input())
        park = n*m
        if park == 1:
            ans.append(1)
        elif park % 2 == 0:
            ans.append(park/2)
        else:
            ans.append(park/2+1)
        t -= 1
    for i in ans:
        print(i)


if __name__ == '__main__':
    main()
