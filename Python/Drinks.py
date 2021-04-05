def main():
    n = int(input())
    arr = list(map(int, input().split()))
    total = sum(arr)
    print(total/n)


if __name__ == "__main__":
    main()
