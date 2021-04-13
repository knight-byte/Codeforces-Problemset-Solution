def main():
    t = int(input())
    for _ in range(t):
        *arr, n = map(int, input().split())
        # print(arr, n)
        arr = sorted(arr)
        total = (sum(arr)+n)/3
        if total == int(total):
            for i in range(2):
                x = arr[-1]-arr[i]
                n -= x
            # print(arr, n)
            if n >= 0 and n % 3 == 0:
                print("YES")
            else:
                print("NO")

        else:
            print("NO")


if __name__ == '__main__':
    main()
