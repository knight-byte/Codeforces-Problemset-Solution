def main():
    t = int(input())
    while t:
        n = int(input())
        arr = sorted([int(input()) for i in range(n)])
        state = True
        for i in range(n-1):
            if arr[i+1]-arr[i] > 1:
                state = False
                break

        if state:
            print("YES")
        else:
            print("NO")
        t -= 1


if __name__ == '__main__':
    main()
