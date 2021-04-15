'''
Author     : knight_byte
File       : A_Common_Subsequence.py
Created on : 2021-04-14 16:22:38
'''


def main():
    a, b = map(int, input().split())
    aa = set(map(int, input().split()))
    ba = set(map(int, input().split()))
    x = list(aa.intersection(ba))
    if len(x) > 0:
        print(f"YES\n1 {x[0]}")
    else:
        print("NO")


if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        main()
