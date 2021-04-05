def main():
    n = int(input())
    c = 0
    for i in range(n):
        c += 1 if input().count("1") > 1 else 0
    print(c)


if __name__ == '__main__':
    main()
