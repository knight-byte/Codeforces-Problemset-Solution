'''
Author     : knight_byte
File       : A_Lunar_New_Year_and_Cross_Counting.py
Created on : 2021-04-20 12:44:28
'''


def main():
    n = int(input())
    mat = [list(input()) for i in range(n)]
    cnt = 0
    for i in range(n):
        for j in range(n):
            try:

                if mat[i][j] == mat[i][j+2] == mat[i+1][j+1] == mat[i+2][j] == mat[i+2][j+2] == "X":
                    cnt += 1
            except IndexError:
                break
    print(cnt)


if __name__ == '__main__':
    main()
