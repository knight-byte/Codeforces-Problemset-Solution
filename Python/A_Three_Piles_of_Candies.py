'''
Author     : knight_byte
File       : A_Three_Piles_of_Candies.py
Created on : 2021-04-19 13:08:35
'''


def main():
    x = list(map(int, input().split()))
    print(sum(x)//2)


if __name__ == '__main__':
    T = int(input())
    for _ in range(T):
        main()
