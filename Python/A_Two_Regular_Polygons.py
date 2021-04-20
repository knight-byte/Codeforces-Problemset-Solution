'''
Author     : knight_byte
File       : A_Two_Regular_Polygons.py
Created on : 2021-04-20 21:01:26
'''


def main():
    n, m = map(int, input().split())
    print("NYOE S"[(1 if n % m == 0 else 0)::2])


if __name__ == '__main__':
    T = int(input())
    for _ in range(T):
        main()
