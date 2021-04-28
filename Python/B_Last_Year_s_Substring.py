'''
Author     : knight_byte
File       : B_Last_Year_s_Substring.py
Created on : 2021-04-28 07:35:14
'''


def main():
    n = int(input())
    s = input()
    com = "2020"
    i = 0
    while i < 4:
        if s[i] == com[i]:
            i += 1
        else:
            break
    print("NYOE S"[(com[i:] == s[(i-4):] or i == 4)::2])


if __name__ == '__main__':
    T = int(input())
    for _ in range(T):
        main()
