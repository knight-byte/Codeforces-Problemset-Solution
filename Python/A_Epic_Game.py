'''
Author     : knight_byte
File       : A_Epic_Game.py
Created on : 2021-04-19 11:52:51
'''


def gcd(a, b):
    if a == 0:
        return b
    return gcd(b % a, a)


def main():
    a, b, n = map(int, input().split())
    turn = True
    while True:

        if turn:
            g = gcd(a, n)
            if n < g:
                print(1)
                break
            else:
                n -= g
            turn = not turn
        else:
            g = gcd(b, n)
            if n < g:
                print(0)
                break
            else:
                n -= g
            turn = not turn


if __name__ == '__main__':
    main()
