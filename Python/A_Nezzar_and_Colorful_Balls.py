'''
Author     : knight_byte
File       : A_Nezzar_and_Colorful_Balls.py
Created on : 2021-04-20 20:13:35
'''
from itertools import groupby


def main():
    n = int(input())
    arr = map(int, input().split())
    grp = [len(list(k)) for _, k in groupby(arr)]
    print(max(grp))


if __name__ == '__main__':
    T = int(input())
    for _ in range(T):
        main()
