'''
Author     : knight_byte
File       : B_Substring_Removal_Game.py
Created on : 2021-04-20 19:30:38
'''
import re


def main():
    s = input()
    rf = re.findall(r"[1]+", s)
    rf = sorted([len(i) for i in rf], reverse=True)[::2]
    print(sum(rf))


if __name__ == '__main__':
    T = int(input())
    for _ in range(T):
        main()
