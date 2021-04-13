'''
Author     : knight_byte
File       : A_Park_Lighting.py
Created on : 2021-04-13 11:19:53
'''

import math


def main():
    n, m = map(int, input().split())
    ans = math.ceil((n*m)/2)
    print(ans)


if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        main()
