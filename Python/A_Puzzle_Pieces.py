'''
Author     : knight_byte
File       : A_Puzzle_Pieces.py
Created on : 2021-04-20 12:17:25
'''


def main():
    n, m = map(int, input().split())
    if n == 1 or m == 1 or n == m == 2:
        print("YES")
    else:
        print("NO")


if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        main()
