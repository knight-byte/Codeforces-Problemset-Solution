from itertools import groupby


def main():
    n = int(input())
    mag = [int(input()) for _ in range(n)]
    grp = list(groupby(mag))
    print(len(grp))


if __name__ == '__main__':
    main()
