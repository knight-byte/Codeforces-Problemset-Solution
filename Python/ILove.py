def main():
    num = int(input())
    arr = [int(input()) for i in range(num)]
    minNum = arr[0]
    maxNum = arr[0]
    counter = 0
    for i in range(1, num):
        if arr[i] > maxNum:
            maxNum = arr[i]
            counter += 1
        elif arr[i] < minNum:
            minNum = arr[i]
            counter += 1
    print(counter)


if __name__ == "__main__":
    main()
