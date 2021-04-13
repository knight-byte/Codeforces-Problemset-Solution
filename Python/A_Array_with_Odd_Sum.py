'''
Author     : knight_byte
File       : A_Array_with_Odd_Sum.py
Created on : 2021-04-13 15:39:25
'''


def main():
    n = int(input())
    a = tuple(map(int, input().split()))
    odd = False
    even = False
    for i in a:
        if odd and even:
            break
        elif i % 2 == 0:
            even = True
        else:
            odd = True
    if odd and even:
        print("YES")
    elif not odd:
        print("NO")
    elif not even:
        if n % 2 == 0:
            print("NO")
        else:
            print("YES")


if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        main()
