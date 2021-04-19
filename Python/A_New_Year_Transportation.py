'''
Author     : knight_byte
File       : A_New_Year_Transportation.py
Created on : 2021-04-16 16:02:35
'''


def main():
    n, g = map(int, input().split())
    arr = list(map(int, input().split()))
    arr.insert(0, 0)
    i = 1
    while i < n+1:
        if i == g:
            print("YES")
            break
        try:
            i += arr[i]
        except IndexError:
            print("NO")
            break
    else:
        print("NO")


if __name__ == '__main__':
    main()
