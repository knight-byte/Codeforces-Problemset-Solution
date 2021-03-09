def main():
    n = int(input())
    s = input()
    one = s.count("n")
    zero = s.count("z")
    print(f'{"1 "*one}{"0 "*zero}')


if __name__ == '__main__':
    main()
