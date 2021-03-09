def main():
    a = input()
    b = input()
    c = sorted(list(input()))
    s = sorted(list(a+b))
    if s == c:
        print('YES')
    else:
        print("NO")


if __name__ == '__main__':
    main()
