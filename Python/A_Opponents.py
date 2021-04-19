'''
Author     : knight_byte
File       : A_Opponents.py
Created on : 2021-04-19 11:29:37
'''


def main():
    n, d = map(int, input().split())
    cnt = 0
    ans = 0
    for _ in range(d):

        op = input()
        if "0" not in op and len(op) == n:
            cnt = 0
        else:
            cnt += 1
        ans = max(ans, cnt)

    print(ans)


if __name__ == '__main__':
    main()
