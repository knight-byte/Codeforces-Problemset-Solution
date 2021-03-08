def main():
    t = int(input())
    ans = []
    while t:
        t -= 1
        n = int(input())
        arr = set()
        for i in range(n):
            temp = int(input())
            arr.add(temp)
        ans.append(len(arr))
    for i in ans:
        print(i)


if __name__ == '__main__':
    main()
