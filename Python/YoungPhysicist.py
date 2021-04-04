import math


def main():
    n = int(input())
    coord = [list(map(int, input().split())) for _ in range(n)]
    x, y, z = 0, 0, 0
    for i, j, k in coord:
        x += i
        y += j
        z += k
    ans = math.sqrt((x**2)+(y**2)+(z**2))
    print("YES" if ans == 0.0 else "NO")


if __name__ == '__main__':
    main()
