def main():
    n, h = map(int, input().split())
    friends = list(map(int, input().split()))
    width = 0
    for i in friends:
        if i > h:
            width += 2
        else:
            width += 1

    print(width)


if __name__ == '__main__':
    main()
