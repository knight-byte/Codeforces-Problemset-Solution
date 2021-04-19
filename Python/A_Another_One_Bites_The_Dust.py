'''
Author     : knight_byte
File       : A_Another_One_Bites_The_Dust.py
Created on : 2021-04-16 11:38:25
'''


def main():
    a, b, c = map(int, input().split())
    if a > b+1:
        a = b+1
    elif a+1 < b:
        b = a+1
    print(a+b+(c*2))


if __name__ == '__main__':
    main()
