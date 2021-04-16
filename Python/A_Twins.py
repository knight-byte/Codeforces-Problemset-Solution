'''
Author     : knight_byte
File       : A_Twins.py
Created on : 2021-04-15 09:01:01
'''


def main():
    n = int(input())
    arr = sorted(list(map(int, input().split())), reverse=True)
    t1 = []

    for i in range(n):
        try:

            if sum(t1) < sum(arr):
                t1.append(arr.pop(0))
            else:
                break
        except IndexError:
            break
    while sum(t1) <= sum(arr):
        t1.append(arr.pop())
    # print(t1)
    print(len(t1))


if __name__ == '__main__':
    main()
