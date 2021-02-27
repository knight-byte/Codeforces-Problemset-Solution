def main():
    t = int(input())
    ans = []
    while t:
        n = int(input())
        if n % 4 == 0:
            ans.append("YES")
        else:
            ans.append("NO")
        t -= 1
    for i in ans:
        print(i)


if __name__ == "__main__":
    main()
