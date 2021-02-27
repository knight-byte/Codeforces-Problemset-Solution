def main():
    t = int(input())
    ans = []
    while t:
        a = int(input())
        b = int(input())
        c = int(input())
        d = int(input())
        temp = [b, c, c]
        ans.append(temp)
        t -= 1
    for i in ans:
        for j in i:
            print(j, end=" ")
        print()


if __name__ == "__main__":
    main()
