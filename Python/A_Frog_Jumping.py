'''
Author     : knight_byte
File       : A_Frog_Jumping.py
Created on : 2021-04-23 12:22:51
'''


import math


def main():
    a, b, k = map(int, input().split())
    x = 0
    x += math.ceil(k/2)*a
    x -= (k//2)*b
    print(x)


if __name__ == '__main__':
    T = int(input())
    for _ in range(T):
        main()
