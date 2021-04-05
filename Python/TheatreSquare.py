import math


def main():
    n, m, a = map(int, input().split())
    a1 = math.ceil(n/a)
    a2 = math.ceil(m/a)
    print(a1*a2)


if __name__ == '__main__':
    main()
