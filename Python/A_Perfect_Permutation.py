'''
Author     : knight_byte
File       : A_Perfect_Permutation.py
Created on : 2021-04-20 14:34:05
'''


def main():
    n = int(input())
    arr = [i for i in range(n+1)]
    for i in range(1, n//2+1):
        arr[2*i-1], arr[2*i] = arr[2*i], arr[2*i-1]
    arr.pop(0)
    for i in range(n):
        if arr[i] == i+1:
            print(-1)
            break
    else:
        print(*arr)


if __name__ == '__main__':
    main()
