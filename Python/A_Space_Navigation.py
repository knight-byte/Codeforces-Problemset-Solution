'''
Author     : knight_byte
File       : A_Space_Navigation.py
Created on : 2021-04-23 12:35:22
'''


def main():
    fin = list(map(int, input().split()))
    com = input()
    cord = [False, False]
    if fin[0] >= 0 and com.count("R") >= fin[0]:
        cord[0] = True
    elif fin[0] < 0 and com.count("L") >= abs(fin[0]):
        cord[0] = True
    if fin[1] >= 0 and com.count("U") >= fin[1]:
        cord[1] = True
    elif fin[1] < 0 and com.count("D") >= abs(fin[1]):
        cord[1] = True
    print("NYOE S"[(cord[0] == cord[1] == True)::2])


if __name__ == '__main__':
    T = int(input())
    for _ in range(T):
        main()
