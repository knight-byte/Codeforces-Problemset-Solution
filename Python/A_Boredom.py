'''
Author     : knight_byte
File       : A_Boredom.py
Created on : 2021-04-16 10:50:54
'''
from collections import Counter


def main():
    n = int(input())
    a = list(map(int, input().split()))
    c = Counter(a)
    x, y = 0, 0
    for i in range(10 ** 5 + 1):
        x, y = y+(i*c[i]), max(x, y)
    print(max(x, y))


if __name__ == '__main__':
    main()
