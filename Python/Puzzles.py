import math


def main():
    n, m = map(int, input().split())
    arr = sorted(list(map(int, input().split())))
    minn = float(math.inf)
    for i in range(0, m-n+1):
        temp = arr[i:i+n]
        cal = max(temp)-min(temp)
        minn = min(minn, cal)

    print(minn)


if __name__ == '__main__':
    main()
