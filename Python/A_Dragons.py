'''
Author     : knight_byte
File       : A_Dragons.py
Created on : 2021-04-15 11:28:24
'''


def main():
    s, l = map(int, input().split())
    lvl = []
    for i in range(l):
        temp = tuple(map(int, input().split()))
        lvl.append(temp)
    lvl = sorted(lvl)
    for i in lvl:
        if s > i[0]:
            s += i[1]
        else:
            print("NO")
            break
    else:
        print("YES")


if __name__ == '__main__':
    main()
