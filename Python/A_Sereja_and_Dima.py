def main():
    n = int(input())
    arr = list(map(int, input().split()))
    s, d = [], []
    turn = True
    while len(arr) > 0:
        x = arr.pop(0) if arr[0] > arr[-1] else arr.pop()
        if turn:
            turn = not turn
            s.append(x)
        else:
            turn = not turn
            d.append(x)

    print(sum(s), sum(d))


if __name__ == '__main__':
    main()
