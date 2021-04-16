'''
Author     : knight_byte
File       : A_C_.py
Created on : 2021-04-14 10:44:05
'''


def main():
    a, b, n = map(int, input().split())
    steps = 0

    while a <= n and b <= n:
        if a > b:
            b += a
            steps += 1
        else:
            a += b
            steps += 1
    print(steps)


if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        main()
