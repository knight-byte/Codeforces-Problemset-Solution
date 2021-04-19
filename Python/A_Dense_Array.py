'''
Author     : knight_byte
File       : A_Dense_Array.py
Created on : 2021-04-19 14:34:04
'''


def main():
    n = int(input())
    arr = list(map(int, input().split()))
    cnt = 0
    while len(arr) > 1:
        mi = min(arr[0], arr[1])
        mx = max(arr[0], arr[1])
        if (mx/mi) <= 2:
            arr.pop(0)
        else:
            arr.insert(1, mi*2)
            cnt += 1
    print(cnt)


if __name__ == '__main__':
    T = int(input())
    for _ in range(T):
        main()
