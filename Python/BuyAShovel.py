import math


def main():
    k, r = map(int, input().split())
    over = True
    count = 0
    amt = k
    while over:
        count += 1
        amt = count*k
        if amt % 10 == 0 or amt % 10 == r:
            over = False

    print(count)


if __name__ == '__main__':
    main()
