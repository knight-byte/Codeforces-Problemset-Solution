'''
Author     : knight_byte
File       : A_Floor_Number.py
Created on : 2021-04-13 11:32:27
'''

import math


def main():
    n, x = map(int, input().split())
    if n < 3:
        print(1)
    else:
        ans = math.floor((n-3)/x)+2
        print(ans)


if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        main()
