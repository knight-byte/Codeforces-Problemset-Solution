'''
Author     : knight_byte
File       : A_Perfectly_Imperfect_Array.py
Created on : 2021-04-19 19:33:42
'''

import math


def psq(x):
    if x >= 0:
        sq = int(math.sqrt(x))
        return sq*sq == x
    return False


def main():
    n = int(input())
    arr = list(map(int, input().split()))
    ans = False
    for i in arr:
        if not psq(i):
            print("YES")
            break
    else:
        print("NO")


if __name__ == '__main__':
    T = int(input())
    for _ in range(T):
        main()
