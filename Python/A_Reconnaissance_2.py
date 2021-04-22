'''
Author     : knight_byte
File       : A_Reconnaissance_2.py
Created on : 2021-04-22 10:14:30
'''


def main():
    n = int(input())
    arr = list(map(int, input().split()))
    ac = arr[:]
    if n > 2:
        ac.append(arr[0])
    temp = [abs(ac[i]-ac[i+1]) for i in range(len(ac)-1)]
    mi = temp.index(min(temp))
    if mi == n-1:
        print(mi + 1, 1)
    else:
        print(mi+1, mi+2)


if __name__ == '__main__':
    main()
