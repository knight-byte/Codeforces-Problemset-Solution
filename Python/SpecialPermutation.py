def main():
    t = int(input())
    ans = []
    while t:
        n = int(input())
        arr = [i+1 for i in range(n)]
        for i in range(n):
            if i+1 >= n and n > 2:
                arr[i], arr[0] = arr[0], arr[i]
            elif arr[i] == i+1:
                arr[i], arr[i+1] = arr[i+1], arr[i]
        ans.append(arr)
        t -= 1

    for i in ans:
        for j in i:
            print(j, end=" ")
        print()


if __name__ == '__main__':
    main()
