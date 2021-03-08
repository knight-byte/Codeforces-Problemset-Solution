def main():
    t = int(input())
    while t:
        t -= 1
        n = int(input())
        arr = [int(input()) for i in range(n)]
        ans = 0
        for i in range(n-1):
            a = min(arr[i], arr[i+1])
            b = max(arr[i], arr[i+1])
            while a*2 < b:
                a *= 2
                ans += 1
        print(ans)


if __name__ == '__main__':
    main()
