'''
Author     : knight_byte
File       : A_Erasing_Zeroes.py
Created on : 2021-04-23 13:23:42
'''


def main():
    x = list(input())
    f = 0
    for i in range(len(x)):
        if x[i] == "1":
            break
        else:
            f += 1
    x = x[::-1]
    for i in range(len(x)):
        if x[i] == "1":
            break
        else:
            f += 1

    print(x.count("0")-f if x.count("0")-f >= 0 else 0)


if __name__ == '__main__':
    T = int(input())
    for _ in range(T):
        main()
