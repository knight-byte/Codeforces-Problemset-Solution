def main():
    num = int(input())
    arr = list(map(int, input().split()))
    ma = max(arr)
    sum = 0
    for i in arr:
        sum += (ma-i)
    print(sum)


if __name__ == "__main__":
    main()
