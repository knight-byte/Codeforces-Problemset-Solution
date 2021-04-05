def main():
    n = int(input())
    arr = list(map(int, input().split()))
    print(" ".join(map(str, sorted(arr))))


if __name__ == '__main__':
    main()
