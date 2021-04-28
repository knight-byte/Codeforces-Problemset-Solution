'''
Author     : knight_byte
File       : A_Arena.py
Created on : 2021-04-28 07:22:20
'''


def main():
    n = int(input())
    arr = list(map(int, input().split()))
    ans = arr.count(min(arr))
    print(n-ans)


if __name__ == '__main__':
    T = int(input())
    for _ in range(T):
        main()
