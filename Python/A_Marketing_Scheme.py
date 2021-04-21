'''
Author     : knight_byte
File       : A_Marketing_Scheme.py
Created on : 2021-04-21 10:48:35
'''


def main():
    l, r = map(int, input().split())
    print("NYOE S"[(2*l > r)::2])


if __name__ == '__main__':
    T = int(input())
    for _ in range(T):
        main()
