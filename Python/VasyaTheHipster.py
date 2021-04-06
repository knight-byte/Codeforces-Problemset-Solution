def main():
    r, b = map(int, input().split())
    ma = max(r, b)
    mi = min(r, b)
    print(mi, (ma-mi)//2)


if __name__ == '__main__':
    main()
