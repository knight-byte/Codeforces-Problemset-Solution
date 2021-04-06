def main():
    n, k = map(int, input().split())
    arr = sorted(list(map(int, input().split())))
    for i in range(n):
        if arr[i]+k > 5:
            arr = arr[:i]
            break
    print(len(arr)//3)


if __name__ == "__main__":
    main()
