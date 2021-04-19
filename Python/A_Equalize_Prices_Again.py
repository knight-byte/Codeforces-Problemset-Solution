'''
Author     : knight_byte
File       : A_Equalize_Prices_Again.py
Created on : 2021-04-19 13:54:20
'''
import math


def main():
    n = int(input())
    arr = list(map(int, input().split()))
    print(math.ceil(sum(arr)/n))


if __name__ == '__main__':
    T = int(input())
    for _ in range(T):
        main()
