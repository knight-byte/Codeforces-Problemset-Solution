def main():
    t = int(input())
    while t:
        n = int(input())
        arr = [int(input()) for i in range(n)]
        if arr[0]+arr[1] <= arr[n-1]:
            print(f"1 2 {n}")
        else:
            print(-1)
        t -= 1


if __name__ == '__main__':
    main()
