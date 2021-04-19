'''
Author     : knight_byte
File       : B_File_Name.py
Created on : 2021-04-19 14:24:23
'''
import re


def main():
    n = int(input())
    s = input()
    rf = re.findall(r"[x]{3,}", string=s)
    cnt = 0
    for i in rf:
        cnt += len(i)-2
    print(cnt)


if __name__ == '__main__':
    main()
