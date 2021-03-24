def main():
    n = int(input())
    a = sorted([int(input()) for i in range(n)])
    m = int(input())
    b = sorted([int(input()) for i in range(m)])
    print(f"{a[-1]} {b[-1]}")


if __name__ == '__main__':
    main()
