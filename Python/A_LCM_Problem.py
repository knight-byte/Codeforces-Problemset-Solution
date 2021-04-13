
def gcd(a, b):
    if a == 0:
        return b
    return gcd(b % a, a)


def lcm(a, b):
    return (a / gcd(a, b)) * b


def main():
    t = int(input())
    for _ in range(t):
        l, r = map(int, input().split())
        x = r-(r % l)
        if x <= l:
            print(-1, -1)
        else:
            lcm_cal = lcm(l, x)
            if l <= lcm_cal and lcm_cal <= r:
                print(l, x)
            else:
                print(-1, -1)


if __name__ == '__main__':
    main()
