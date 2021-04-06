import math


def is_prime(n):
    if n <= 1:
        return False

    max_div = math.floor(math.sqrt(n))
    for i in range(2, 1 + max_div):
        if n % i == 0:
            return False
    return True


def main():
    num = int(input())
    x, y = 4, num-4
    while is_prime(x) or is_prime(y):
        x += 1
        y -= 1
    print(x, y)


if __name__ == '__main__':
    main()
