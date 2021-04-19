'''
Author     : knight_byte
File       : B_Yet_Another_Bookshelf.py
Created on : 2021-04-16 20:06:12
'''

import re


def main():
    n = int(input())
    arr = input().split()
    x = arr[:]
    for i in arr:
        if i == "1":
            break
        else:
            x.pop(0)

    for i in arr[::-1]:
        if i == "1":
            break
        else:
            x.pop()
    print(x.count("0"))


if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        main()
