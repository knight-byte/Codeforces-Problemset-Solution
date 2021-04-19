'''
Author     : knight_byte
File       : B_Anton_and_Digits.py
Created on : 2021-04-19 14:03:17
'''


def main():
    _2, _3, _5, _6 = map(int, input().split())
    _256 = min(_2, _5, _6)
    _2 -= _256
    _31 = min(_2, _3)
    print((256*_256)+(32*_31))


if __name__ == '__main__':
    main()
