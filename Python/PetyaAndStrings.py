def main():
    a = input().lower()
    b = input().lower()
    if a == b:
        return 0
    x = sorted([a, b])
    if x[0] == a:
        return -1
    else:
        return 1


if __name__ == '__main__':
    print(main())
