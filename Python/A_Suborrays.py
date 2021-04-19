'''
Author     : knight_byte
File       : A_Suborrays.py
Created on : 2021-04-19 14:44:30
'''
import random


def main():
    n = int(input())
    arr = [i for i in range(1, n+1)]
    random.shuffle(arr)
    print(*arr)


if __name__ == '__main__':
    T = int(input())
    for _ in range(T):
        main()
