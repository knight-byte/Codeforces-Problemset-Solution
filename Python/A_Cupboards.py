'''
Author     : knight_byte
File       : A_Cupboards.py
Created on : 2021-04-19 12:05:55
'''


def main():
    n = int(input())
    l, r = [], []
    for _ in range(n):
        x, y = input().split()
        l.append(x)
        r.append(y)
    ans = min(l.count("0"), l.count("1"))+min(r.count("0"), r.count("1"))
    print(ans)


if __name__ == '__main__':
    main()
