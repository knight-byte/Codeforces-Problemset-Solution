import math


def main():
    arr = sorted(list(map(int, input().split())))
    print(abs(arr[1]-arr[0])+abs(arr[2]-arr[1]))


if __name__ == '__main__':
    main()
