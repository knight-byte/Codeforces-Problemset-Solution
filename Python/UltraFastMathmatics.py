def main():
    l = input()
    x = int(l, 2)
    y = int(input(), 2)
    print(bin(x ^ y)[2:].zfill(len(l)))


if __name__ == '__main__':
    main()
