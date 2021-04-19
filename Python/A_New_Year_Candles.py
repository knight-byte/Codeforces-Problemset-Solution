'''
Author     : knight_byte
File       : A_New_Year_Candles.py
Created on : 2021-04-18 11:18:12
'''


def main():
    a, b = map(int, input().split())
    total = a
    while b <= a:
        left = a//b
        a = left+(a % b)
        total += left
    print(total)


if __name__ == '__main__':
    main()
