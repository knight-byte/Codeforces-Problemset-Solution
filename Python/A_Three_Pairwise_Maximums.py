def main():
    t = int(input())
    for _ in range(t):
        arr = tuple(map(int, input().split()))
        ma = max(arr)
        mi = min(arr)
        if arr.count(ma) > 1:
            print("YES")
            print(ma, mi, mi)
        else:
            print("NO")


if __name__ == '__main__':
    main()
