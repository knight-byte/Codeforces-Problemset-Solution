'''
Author     : knight_byte
File       : B_Restore_the_Permutation_by_Merger.py
Created on : 2021-04-13 11:37:07
'''


def main():
    n = int(input())
    arr = tuple(map(int, input().split()))
    ans = []
    for i in arr:
        if i not in ans:
            ans.append(i)
        if len(ans) >= n:
            break
    print(*ans)


if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        main()
