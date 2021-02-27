def main():
    num = int(input())
    numVal = num
    arr = [int(input()) for i in range(num)]
    res, maxVal = 0, 0
    arr = sorted(arr)
    maxVal = arr[-1]
    for i in arr:
        res += (maxVal-i)
    print(res)


if __name__ == "__main__":
    main()
