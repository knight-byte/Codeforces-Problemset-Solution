def main():
    n = int(input())
    arr = tuple(map(int, input().split()))
    x = min(arr.count(1), arr.count(2), arr.count(3))
    a, b, c = [], [], []
    count = 0
    print(x)
    for i in range(n):
        if len(a) == len(b) == len(c) == x:
            break
        elif arr[i] == 1:
            a.append(i+1)
        elif arr[i] == 2:
            b.append(i+1)
        elif arr[i] == 3:
            c.append(i+1)
    for i in range(x):
        print(a[i], b[i], c[i])


if __name__ == '__main__':
    main()
