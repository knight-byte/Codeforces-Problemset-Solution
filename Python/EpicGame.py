import math


def main():
    a = int(input())
    b = int(input())
    n = int(input())
    ans = 0
    turn = True
    while n > 0:
        temp = 0
        if turn:
            temp = math.gcd(a, b)
            n -= temp
            turn = False
            if temp > n:
                ans = 0
        else:
            temp = math.gcd(b, n)
            n -= temp
            turn = True
            if temp > n:
                ans = 1
    print(ans)


if __name__ == '__main__':
    main()
