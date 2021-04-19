'''
Author     : knight_byte
File       : A_Captain_Flint_and_Crew_Recruitment.py
Created on : 2021-04-19 13:40:42
'''


def main():
    n = int(input())
    if n < 31:
        print("NO")
    else:
        print("YES")
        if n in [44, 40, 36]:
            print(6, 10, 15, n-31)
        else:
            print(14, 10, 6, n-30)


if __name__ == '__main__':
    T = int(input())
    for _ in range(T):
        main()
