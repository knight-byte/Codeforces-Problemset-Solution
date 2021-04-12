def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        arr = set(map(int, input().split()))
        print(len(arr))


if __name__ == '__main__':
    main()
