def main():
    n = int(input())
    arr = [[] for i in range(4)]
    for i in range(n):
        x = int(input())
        arr[x].append(i+1)
    res = min(len(arr[1]), min(len(arr[2]), len(arr[3])))
    print(res)
    for i in range(res):
        print(arr[1][i], " ", arr[2][i], " ", arr[3][i])


if __name__ == '__main__':
    main()
