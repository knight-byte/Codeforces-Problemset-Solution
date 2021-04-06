import math


def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        if n < 3:
            print(0)
        else:
            print(math.ceil(n/2)-1)


if __name__ == "__main__":
    main()
