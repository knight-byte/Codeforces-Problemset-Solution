def main():
    num = int(input())
    arr = [input() for i in range(num)]
    for i in range(num):
        if arr[i] < 3:
            print(0)
        elif arr[i] % 2 == 0:
            print(arr[i]/2-1)
        else:
            print(arr[i]/2)


if __name__ == "__main__":
    main()
