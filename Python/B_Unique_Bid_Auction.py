'''
Author     : knight_byte
File       : B_Unique_Bid_Auction.py
Created on : 2021-04-20 12:24:17
'''
from collections import Counter
import math


def main():
    n = int(input())
    arr = list(map(int, input().split()))
    c = Counter(arr)
    mi = math.inf
    for i, j in c.items():
        if j == 1:
            mi = min(i, mi)

    if mi != math.inf:
        print(arr.index(mi)+1)
    else:
        print(-1)


if __name__ == '__main__':
    T = int(input())
    for _ in range(T):
        main()
