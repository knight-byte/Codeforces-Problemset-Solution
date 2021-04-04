def main():
    n, k = map(int, input().split())
    arr = list(map(int, input().split()))
    k_val = arr[k-1]
    arr = [arr[i]
           for i in range(n) if arr[i] > 0 and arr[i] >= k_val]
    print(len(arr))


if __name__ == '__main__':
    main()
