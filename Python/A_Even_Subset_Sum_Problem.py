'''
Author     : knight_byte
File       : A_Even_Subset_Sum_Problem.py
Created on : 2021-04-21 11:16:19
'''


def main():
    n = int(input())
    arr = list(map(int, input().split()))
    odd = []
    for i in range(n):
        if arr[i] % 2 == 0:
            print(f"1\n{i+1}")
            break
        else:
            odd.append(str(i+1))
            if len(odd) == 2:
                print(f"2\n{' '.join(odd)}")
                break
    else:
        print(-1)


if __name__ == '__main__':
    T = int(input())
    for _ in range(T):
        main()
