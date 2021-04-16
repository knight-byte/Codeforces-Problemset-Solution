'''
Author     : knight_byte
File       : A_Replacing_Elements.py
Created on : 2021-04-14 09:55:54
'''


def min_sum(arr, i, d):
    for j in range(len(arr)-1):
        for k in range(j+1, len(arr)):
            if j != i and k != 0 and arr[j]+arr[k] <= d:
                return arr[j]+arr[k]
    return -1


def main():
    n, d = map(int, input().split())
    arr = sorted(list(map(int, input().split())))
    print("YES" if min(arr[-1], arr[0]+arr[1]) <= d else "NO")


if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        main()
