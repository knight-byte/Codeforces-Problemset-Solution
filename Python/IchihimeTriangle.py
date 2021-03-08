def main():
    t = int(input())
    ans = []
    while t:
        t -= 1
        a = int(input())
        b = int(input())
        c = int(input())
        d = int(input())
        tempsol = [b, c, c]
        ans.append(tempsol)
    for i in range(len(ans)):
        for j in range(len(i)):
            print(ans[i][j], end=" ")
        print()


if __name__ == '__main__':
    main()
