'''
Author     : knight_byte
File       : A_Juggling_Letters.py
Created on : 2021-04-16 19:24:56
'''
from collections import Counter


def main():
    n = int(input())
    s = ""
    for _ in range(n):
        s += input()
    c = Counter(s)
    for i in c:
        if c[i] % n != 0:
            print("NO")
            break
    else:
        print("YES")


if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        main()
