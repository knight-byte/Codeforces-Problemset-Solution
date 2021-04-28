'''
Author     : knight_byte
File       : A_Free_Ice_Cream.py
Created on : 2021-04-28 07:27:59
'''


def main():
    n, ice = map(int, input().split())
    cnt = 0
    for i in range(n):
        s, num = input().split()
        if s == "+":
            ice += int(num)
        else:
            if ice >= int(num):
                ice -= int(num)
            else:
                cnt += 1
    print(ice, cnt)


if __name__ == '__main__':
    main()
