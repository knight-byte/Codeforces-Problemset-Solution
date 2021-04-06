from itertools import groupby


def main():
    length = int(input())
    stones = input()
    x = [i[0] for i in list(groupby(stones))]
    print(len(stones)-len(x))


if __name__ == '__main__':
    main()
