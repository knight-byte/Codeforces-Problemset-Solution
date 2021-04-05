def main():
    n = int(input())
    room_acc = 0
    for _ in range(n):
        p, q = map(int, input().split())
        if p+2 <= q:
            room_acc += 1

    print(room_acc)


if __name__ == '__main__':
    main()
