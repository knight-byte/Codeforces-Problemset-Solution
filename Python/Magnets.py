def main():
    n = int(input())
    arr = [int(input()) for i in range(n)]
    counter = 1
    result = 0
    initailVal = arr[0]
    for i in range(n):
        if arr[i] == initailVal:
            if result < counter:
                result = counter
            continue
        elif arr[i] != initailVal:
            counter += 1
            initailVal = arr[i]
            if result < counter:
                result = counter
    print(result)


if __name__ == '__main__':
    main()
