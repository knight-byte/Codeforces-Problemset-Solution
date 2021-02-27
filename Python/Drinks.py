def main():
    n = int(input())
    arr = [int(input()) for i in range(n)]
    total = sum(arr)
    print(total/n)


if __name__ == "__main__":
    main()
