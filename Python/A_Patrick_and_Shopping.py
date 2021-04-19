'''
Author     : knight_byte
File       : A_Patrick_and_Shopping.py
Created on : 2021-04-19 14:15:35
'''


def main():
    d = sorted(list(map(int, input().split())))
    mi = min(2*(d[0]+d[1]), sum(d))
    print(mi)


if __name__ == '__main__':
    main()
