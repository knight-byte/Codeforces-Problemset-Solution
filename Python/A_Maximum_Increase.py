'''
Author     : knight_byte
File       : A_Maximum_Increase.py
Created on : 2021-04-16 19:34:48
'''


def main():
    n = int(input())
    arr = tuple(map(int, input().split()))
    cnt = 0
    ma = 0
    maxx = 1
    for i in arr:
        # print(ma)
        if ma < i:
            # print("h1")
            cnt += 1
        elif ma >= i:
            # print("h2")
            maxx = max(maxx, cnt)
            cnt = 1
        ma = i
    maxx = max(maxx, cnt)

    print(maxx)


if __name__ == '__main__':
    main()
