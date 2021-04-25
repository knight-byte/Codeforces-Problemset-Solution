'''
Author     : knight_byte
File       : A_Sum_of_2050.py
Created on : 2021-04-25 11:35:41
'''


def main():
    n = int(input())
    ans = -1
    if n % 2050 == 0:
        ans = sum(list(map(int, str(n//2050))))
    print(ans)


if __name__ == '__main__':
    T = int(input())
    for _ in range(T):
        main()
