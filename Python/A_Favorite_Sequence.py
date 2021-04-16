'''
Author     : knight_byte
File       : A_Favorite_Sequence.py
Created on : 2021-04-14 09:00:17
'''


def main():
    n = int(input())
    alter = True
    arr = list(map(int, input().split()))
    ans = []
    alter = True
    for _ in range(n):
        if alter:
            alter = not alter
            ans.append(arr.pop(0))
        else:
            alter = not alter
            ans.append(arr.pop())

    print(*ans)


if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        main()
