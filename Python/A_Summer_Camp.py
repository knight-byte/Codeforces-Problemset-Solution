'''
Author     : knight_byte
File       : A_Summer_Camp.py
Created on : 2021-04-16 11:30:40
'''


def main():
    n = int(input())
    s = ""
    i = 1
    while len(s) < n+1:
        s += str(i)
        i += 1
    print(s[n-1])


if __name__ == '__main__':
    main()
