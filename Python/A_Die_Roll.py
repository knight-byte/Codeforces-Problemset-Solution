'''
Author     : knight_byte
File       : A_Die_Roll.py
Created on : 2021-04-14 09:25:32
'''
from fractions import Fraction


def main():
    y, w = map(int, input().split())
    d = 6-max(y, w)+1
    print(Fraction(d, 6) if d != 6 else "1/1")


if __name__ == '__main__':
    main()
