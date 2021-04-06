def main():
    a, b, c = [int(input()) for _ in range(3)]
    x = [a*b*c, a*b+c, a+b*c, a+b+c, (a+b)*c, a*(b+c)]
    print(max(x))


if __name__ == '__main__':
    main()
