'''
Author     : knight_byte
File       : A_Little_Pony_and_Crystal_Mine.py
Created on : 2021-04-19 12:14:54
'''


def main():
    n = int(input())
    ans = []
    for i in range(1, n, 2):
        s = (n-i)//2
        temp = "*"*s+"D"*i+"*"*s
        ans.append(temp)
    ans.append("D"*n)
    for i in reversed(ans[:-1]):
        ans.append(i)
    for i in ans:
        print(i)


if __name__ == '__main__':
    main()
