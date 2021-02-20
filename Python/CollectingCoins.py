def main():
    length = 3
    t = int(input())
    ans = []
    while t:
        temp = [int(input()) for i in range(length)]
        n = int(input())
        temp = sorted(temp)
        toSub = ((temp[2]-temp[0]) + (temp[2]-temp[1]))
        n -= toSub
        if n < 0:
            ans.append("NO")
        elif n % 3 == 0:
            ans.append("YES")
        else:
            ans.append("NO")
    for i in ans:
        print(i)


if __name__ == "__main__":
    main()
