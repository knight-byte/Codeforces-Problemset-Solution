def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        arr = sorted(list(map(int, input().split())))
        state = True
        for i in range(n-1):
            if arr[i+1]-arr[i] > 1:
                state = False
                break

        if state:
            print("YES")
        else:
            print("NO")


if __name__ == '__main__':
    main()
