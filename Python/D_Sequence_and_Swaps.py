'''
Author     : knight_byte
File       : D_Sequence_and_Swaps.py
Created on : 2021-04-23 10:11:10
'''


def main():
    n, x = map(int, input().split())
    arr = list(map(int, input().split()))
    f = False
    i = 0
    cnt = 0
    while i < n:
        if sorted(arr) == arr:
            break
        elif arr[i] > x:
            cnt += 1
            arr[i], x = x, arr[i]
            i = 0
        else:
            i += 1
    if sorted(arr) == arr:
        print(cnt)
    else:
        print(-1)


if __name__ == '__main__':
    T = int(input())
    for _ in range(T):
        main()
