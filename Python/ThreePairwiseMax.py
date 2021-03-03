def main():
    t = int(input())
    while t:
        arr = sorted([int(input()) for i in range(3)])
        if arr[1] != arr[2]:
            print("NO")
        else:
            print("YES\n", arr[0], " ", arr[0], " ", arr[2])
        t -= 1


if __name__ == '__main__':
    main()
