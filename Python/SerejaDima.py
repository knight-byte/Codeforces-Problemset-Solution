def main():
    n = int(input())
    serej = 0
    dima = 0
    arr = [int(input()) for i in range(n)]
    right = n-1
    left = 0
    for i in range(n):
        if i % 2 == 0:
            if arr[right] > arr[left]:
                serej += arr[right]
                right -= 1
            elif arr[left] > arr[right]:
                serej += arr[left]
                left += 1
            else:
                serej += arr[left]
        else:
            if arr[right] > arr[left]:
                dima += arr[right]
                right -= 1
            elif arr[left] > arr[right]:
                dima += arr[left]
                left += 1
            else:
                dima += arr[left]
    print(serej, " ", dima)


if __name__ == '__main__':
    main()
