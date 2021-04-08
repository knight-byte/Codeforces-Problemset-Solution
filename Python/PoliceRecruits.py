def main():
    n = int(input())
    arr = list(map(int, input().split()))
    police = 0
    count = 0
    for i in arr:
        if i == -1 and police == 0:
            count += 1
        elif i == -1 and police > 0:
            police -= 1
        elif i > 0:
            police += i
    print(count)


if __name__ == '__main__':
    main()
