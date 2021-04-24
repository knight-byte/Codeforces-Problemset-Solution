'''
Author     : knight_byte
File       : B_Multiply_by_2_divide_by_6.py
Created on : 2021-04-24 16:47:20
'''


def main():
    n = int(input())
    c2 = 0
    c3 = 0
    while n % 2 == 0:
        n //= 2
        c2 += 1
    while n % 3 == 0:
        n //= 3
        c3 += 1
    if n == 1 and c2 <= c3:
        print(2*c3-c2)
    else:
        print(-1)


if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        main()
