'''
Author     : knight_byte
File       : A_Kuroni_and_the_Gifts.py
Created on : 2021-04-16 11:45:58
'''


def main():
    n = int(input())
    nec = sorted(list(map(int, input().split())))
    br = sorted(list(map(int, input().split())))
    print(*nec)
    print(*br)


if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        main()
