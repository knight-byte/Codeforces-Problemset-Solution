import math


def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        arr = sorted(list(map(int, input().split())))
        ma = math.inf
        for i in range(0, n-1):
            ma = min(ma, arr[i+1]-arr[i])
        print(ma)


if __name__ == '__main__':
    main()
