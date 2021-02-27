def main():
    n = int(input())
    arr = [[0, 0] for i in range(n)]
    for i in range(n):
        for j in range(2):
            arr[i][j] = int(input())
    res = 0
    ans = []
    for i in range(n):
        ans.append(arr[i][0] - arr[i][1])
        if ans[i] < 0:
            ans[i] = ans[i]*(-1)
    for i in range(n):
        if ans[i] >= 2:
            res += 1
    print(res)


if __name__ == "__main__":
    main()
