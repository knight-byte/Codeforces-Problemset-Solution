'''
Author     : knight_byte
File       : A_Game_With_Sticks.py
Created on : 2021-04-15 11:21:44
'''


def main():
    a, b = map(int, input().split())
    if min(a, b) % 2 == 0:
        print("Malvika")
    else:
        print("Akshat")


if __name__ == '__main__':
    main()
