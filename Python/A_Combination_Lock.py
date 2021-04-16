'''
Author     : knight_byte
File       : A_Combination_Lock.py
Created on : 2021-04-14 09:12:05
'''


def main():
    n = int(input())
    s = input()
    o = input()
    sum = 0
    for i in range(n):
        diff = abs(int(o[i])-int(s[i]))
        sum += min(diff, 10-diff)
    print(sum)


if __name__ == '__main__':
    main()
