'''
Author     : knight_byte
File       : A_Neko_Finds_Grapes.py
Created on : 2021-04-18 11:55:56
'''


def main():
    c, k = map(int, input().split())
    ac = list(map(int, input().split()))
    ak = list(map(int, input().split()))
    e = 0
    o = 0
    for i in ac:
        if i % 2 == 0:
            e += 1
        else:
            o += 1
    for i in ak:
        if i % 2 == 0:
            e += 1
        else:
            o += 1
    print(min(c, k, e, o))


if __name__ == '__main__':
    main()
