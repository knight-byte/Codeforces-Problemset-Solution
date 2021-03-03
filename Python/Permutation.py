def main():
    t = int(input())
    while t:
        n = int(input())
        arr = [int(input()) for i in range(2*n)]
        ans = []
        for i in arr:
            if i not in ans:
                ans.append(i)
                print(i)
        t -= 1


if __name__ == '__main__':
    main()
