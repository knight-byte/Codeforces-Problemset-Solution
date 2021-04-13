'''
Author     : knight_byte
File       : A_Special_Permutation.py
Created on : 2021-04-13 11:43:13
'''


def main():
    n = int(input())
    arr = [i for i in range(1, n + 1)]
    for i in range(n-1):
        arr[i], arr[i+1] = arr[i+1], arr[i]
    print(*arr)


if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        main()
