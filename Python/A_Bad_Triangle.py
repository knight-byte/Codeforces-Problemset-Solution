'''
Author     : knight_byte
File       : A_Bad_Triangle.py
Created on : 2021-04-16 19:55:15
'''


def main():
    n = int(input())
    arr = list(map(int, input().split()))
    if arr[0]+arr[1] <= arr[-1]:
        print(1, 2, n)
    else:
        print(-1)


if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        main()
