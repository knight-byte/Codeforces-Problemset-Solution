'''
Author     : knight_byte
File       : A_I_m_bored_with_life.py
Created on : 2021-04-20 14:13:04
'''


def fact(a):
    x = 1
    for i in range(2, a+1):
        x *= i
    return x


def main():
    a, b = map(int, input().split())
    print(fact(min(a, b)))


if __name__ == '__main__':
    main()
