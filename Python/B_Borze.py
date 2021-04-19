'''
Author     : knight_byte
File       : B_Borze.py
Created on : 2021-04-19 13:21:08
'''


def main():
    s = list(input())
    f, r = 0, 1
    c = {".": "0", "-.": "1", "--": "2"}
    ans = ""
    while r <= len(s):
        temp = "".join(s[f:r])
        if temp in c:
            ans += c[temp]
            f = r

        r += 1

    print(ans)


if __name__ == '__main__':
    main()
