'''
Author     : knight_byte
File       : A_Vitaly_and_Night.py
Created on : 2021-04-18 12:44:00
'''


def main():
    n, m = map(int, input().split())
    x = "".join(["".join(input().split()) for _ in range(n)])
    li = 0
    f = len(x)//(n*m)
    for i in range(0, len(x), f):
        # print(i)
        if "1" in x[i:i+f]:
            li += 1
    print(li)


if __name__ == '__main__':
    main()
