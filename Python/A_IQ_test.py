'''
Author     : knight_byte
File       : A_IQ_test.py
Created on : 2021-04-15 10:58:45
'''


def main():
    n = int(input())
    arr = list(map(int, input().split()))
    o = [-1, 0]
    e = [-1, 0]
    for i in range(n):
        if arr[i] % 2 == 0:
            e[0] = i+1
            e[1] += 1
        else:
            o[0] = i+1
            o[1] += 1
    if e[1] > o[1]:
        print(o[0])
    else:
        print(e[0])


if __name__ == '__main__':
    main()
