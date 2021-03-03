def main():
    t = int(input())
    ans = []
    while t:
        a = int(input())
        b = int(input())
        if a == b:
            ans.append(0)
        elif a < b:
            diff = b-a
            if diff % 2 == 0:
                ans.append(1)
            else:
                ans.append(2)
        else:
            diff = a-b
            if diff % 2 == 0:
                ans.append(1)
            else:
                ans.append(2)
        t -= 1

    for i in ans:
        print(i)


if __name__ == '__main__':
    main()
