def main():
    n = int(input())
    arr = list(map(int, input().split()))
    minVal = min(arr)
    maxVal = max(arr)
    rev_arr = arr[::-1]
    ma_pos = arr.index(maxVal)
    mi_pos = rev_arr.index(minVal)
    if ma_pos >= n-mi_pos-1:
        print(ma_pos+mi_pos-1)
    else:
        print(ma_pos+mi_pos)


if __name__ == '__main__':
    main()
