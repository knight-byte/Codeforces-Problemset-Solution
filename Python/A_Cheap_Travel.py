'''
Author     : knight_byte
File       : A_Cheap_Travel.py
Created on : 2021-04-16 14:43:06
'''
import math


def main():
    n, m, a, b = map(int, input().split())
    print(n*a if m*a <= b else (n//m) * b + min((n % m) * a, b))


if __name__ == '__main__':
    main()
