'''
Author     : knight_byte
File       : A_QAQ.py
Created on : 2021-04-20 20:20:29
'''


def main():
    s = input()

    cnt = 0
    try:
        fq = s.index("Q")
        lq = len(s)-s[::-1].index("Q")-1
        ns = s[fq: lq+1]
        n = len(ns)
        i = 0
        if len(ns) > 3:
            for i in range(n):
                for j in range(i, n):
                    for k in range(j, n):
                        if ns[i] == ns[k] == "Q" and ns[j] == "A":
                            cnt += 1
    except ValueError:
        pass
    print(cnt)


if __name__ == '__main__':
    main()
