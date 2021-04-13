def main():
    t = int(input())
    for _ in range(t):
        n, k = map(int, input().split())
        arr = [i for i in range(1, n+1)]
        if k == 0:
            print(*arr)
        elif (n < 3 and k > 0) or n == k:
            print(-1)
        else:
            if k*2+1 <= n:
                for i in range(2, k*2+1, 2):
                    temp = arr[i]
                    arr[i] = arr[i-1]
                    arr[i-1] = temp
                print(*arr)
            else:
                print(-1)


if __name__ == '__main__':
    main()
