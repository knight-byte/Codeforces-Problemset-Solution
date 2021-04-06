def main():
    maxx = 1
    n = int(input())
    arr = list(map(int, input().split()))
    current_max = 0
    len_max = 1
    for i in arr:
        if current_max > i:
            maxx = max(maxx, len_max)
            len_max = 1
        current_max = i
        len_max += 1
    maxx = max(maxx, len_max)-1

    print(maxx)


if __name__ == '__main__':
    main()
