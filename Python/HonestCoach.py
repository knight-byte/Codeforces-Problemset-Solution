def main():
    t = int(input())
    res = []
    while t:
        n = int(input())
        arr = [int(input()) for i in range(n)]
        arr = sorted(arr)
        result = arr[n-1] - arr[0]
        for i in range(n):
            for j in range(i+1, n):
                result = min(result, arr[j]-arr[i])
        res.append(result)
        t -= 1
    for i in res:
        print(i)


if __name__ == "__main__":
    main()
