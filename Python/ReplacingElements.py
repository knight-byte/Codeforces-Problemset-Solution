def main():
    t = int(input())
    while t:
        n = int(input())
        d = int(input())
        arr = sorted([int(input()) for i in range(n)])
        if max(arr) <= d:
            print("YES")
        elif arr[0]+arr[1] <= d:
            print("YES")
        else:
            print("NO")
        t -= 1


if __name__ == '__main__':
    main()
