'''
Author     : knight_byte
File       : A_SwapSort.py
Created on : 2021-04-17 20:13:38
'''


def main():
    n = int(input())
    arr = list(map(int, input().split()))
    swap = 0
    ind = 0
    i_s = []
    while ind < len(arr):
        mi = min(arr[ind:])
        if mi != arr[ind]:
            for i in range(ind, n):
                if arr[i] == mi and i != ind:
                    arr[ind], arr[i] = arr[i], arr[ind]
                    i_s.append((ind, i))
                    swap += 1
                    break
        ind += 1
    print(swap)
    for i in range(swap):
        print(*i_s[i])


if __name__ == '__main__':
    main()
