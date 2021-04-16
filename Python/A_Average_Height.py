'''
Author     : knight_byte
File       : A_Average_Height.py
Created on : 2021-04-16 20:19:22
'''


def main():
    n = int(input())
    arr = list(map(int, input().split()))
    e = []
    o = []
    for i in arr:
        if i % 2 == 0:
            e.append(i)
        else:
            o.append(i)
    print(*o, *e)


if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        main()
