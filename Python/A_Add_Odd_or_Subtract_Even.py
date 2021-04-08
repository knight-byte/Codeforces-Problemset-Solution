def main():
    t = int(input())
    for _ in range(t):
        a, b = map(int, input().split())
        val = b-a
        if val == 0:
            print(0)
        elif val > 0:
            if val % 2 != 0:
                print(1)
            else:
                print(2)
        else:
            if val % 2 == 0:
                print(1)
            else:
                print(2)


if __name__ == '__main__':
    main()
