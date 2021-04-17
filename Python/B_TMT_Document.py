'''
Author     : knight_byte
File       : B_TMT_Document.py
Created on : 2021-04-17 20:09:04
'''


def main():
    n = int(input())
    tmt = list(input().lower())
    t = []
    m = []
    for i in range(n):
        if tmt[i] == "t":
            t.append(i)
        else:
            m.append(i)
    if len(t) != len(m)*2:
        print("NO")
    else:
        # print(t, m)
        for i in range(len(m)):
            if t[i] > m[i] or m[i] > t[len(m)+i]:
                print("NO")
                break
        else:
            print("YES")


if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        main()
