'''
Author     : knight_byte
File       : A_Tit_for_Tat.py
Created on : 2021-04-25 11:53:11
'''


def main():
    n, k = map(int, input().split())
    arr = list(map(int, input().split()))
    ind = 0
    b_i = n-1
    for _ in range(k):
        if arr[ind] > 0:
            arr[ind] -= 1
        else:
            if ind+1 == n-1:
                break
            while ind+1 != n-1:
                ind += 1
                if arr[ind] > 0:
                    arr[ind] -= 1
                    break
            else:
                break
        arr[n-1] += 1
    print(*arr)


if __name__ == '__main__':
    T = int(input())
    for _ in range(T):
        main()
