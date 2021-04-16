'''
Author     : knight_byte
File       : B_Taxi.py
Created on : 2021-04-15 09:48:02
'''
import math


def main():
    n = int(input())
    arr = sorted(list(map(int, input().split())), reverse=True)
    cars = arr.count(4)
    c_3 = arr.count(3)
    c_2 = arr.count(2)
    c_1 = arr.count(1)
    cars += c_3
    c_1 -= c_3
    cars += ((c_2//2)+c_2 % 2)
    if c_2 % 2 == 1:
        c_1 -= 2
    if c_1 > 0:
        cars += math.ceil(c_1/4)

    print(cars)


if __name__ == '__main__':
    main()
