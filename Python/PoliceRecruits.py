def main():
    events = int(input())
    arr = [int(input()) for i in range(events)]
    police = 0
    ans = 0
    for i in range(events):
        if arr[i] == -1:
            if ~police:
                ans += 1
            else:
                police -= 1
        else:
            police += arr[i]
    print(ans)


if __name__ == '__main__':
    main()
