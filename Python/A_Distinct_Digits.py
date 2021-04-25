'''
Author     : knight_byte
File       : A_Distinct_Digits.py
Created on : 2021-04-25 11:41:33
'''


def main():
    l, r = map(int, input().split())
    for i in range(l, r+1):
        temp = str(i)
        if len(set(temp)) == len(temp):
            print(temp)
            break
    else:
        print(-1)


if __name__ == '__main__':
    main()
