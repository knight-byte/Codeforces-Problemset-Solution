def main():
    n = int(input())
    arr = list(map(int, input().split()))
    ans = []
    for i in sorted(arr):
        temp = arr.index(i)
        ans.append(temp+1)

    print(" ".join(map(str, ans)))


if __name__ == '__main__':
    main()
