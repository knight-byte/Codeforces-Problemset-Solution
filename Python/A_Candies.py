'''
Author     : knight_byte
File       : A_Candies.py
Created on : 2021-04-16 16:15:48
'''


def main():
    n = int(input())
    k = 3
    while n % k != 0:
        k = 2*k + 1
    print(n//k)


if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        main()
