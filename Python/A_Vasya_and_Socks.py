'''
Author     : knight_byte
File       : A_Vasya_and_Socks.py
Created on : 2021-04-17 12:41:20
'''


def main():
    n, m = map(int, input().split())
    # d = n+((n+m)//m)
    d = 0
    while n > 0:
        d += 1
        if d % m == 0:
            n += 1
        n -= 1
    print(d)


if __name__ == '__main__':
    main()
