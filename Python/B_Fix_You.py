'''
Author     : knight_byte
File       : B_Fix_You.py
Created on : 2021-04-26 12:01:54
'''


def main():
    n, m = map(int, input().split())
    mat = [list(input()) for i in range(n)]
    dc = [1 for i in mat if i[-1] == "R"]
    rc = [1 for i in mat[-1] if i == "D"]
    print(sum(dc)+sum(rc))


if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        main()
