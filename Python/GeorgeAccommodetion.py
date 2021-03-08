def main():
    n = int(input())
    arr = [[int(input()) for i in range(2)] for j in range(n)]
    res = 0
    ans = [0 for i in range(n)]
    for i in range(n):
        ans[i] = arr[i][0] - arr[i][1]
        if ans[i] < 0:
            ans[i] = ans[i] * (-1)
    for i in range(n):
        if ans[i] >= 2:
            res += 1
    print(res)


if __name__ == '__main__':
    main()
