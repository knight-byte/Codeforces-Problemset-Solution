'''
Author     : knight_byte
File       : A_Chips.py
Created on : 2021-04-16 11:55:37
'''


def main():
    n, m = map(int, input().split())
    i = 1
    while i <= m:
        m -= i
        i = (i) % n + 1
    print(m)


if __name__ == '__main__':
    main()
