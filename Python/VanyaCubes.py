def main():
    n = int(input())
    count, h, i, total = 0, 0, 1, 0
    while total <= n:
        count += i
        total += count
        i += 1
        h += 1
    if h == 1:
        print(h)
    else:
        print(h-1)


if __name__ == '__main__':
    main()
