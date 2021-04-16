'''
Author     : knight_byte
File       : A_Bus_to_Udayland.py
Created on : 2021-04-14 10:20:50
'''


def main():
    n = int(input())
    ans = ["".join(input().split("|")) for i in range(n)]
    for i in range(n):
        if ans[i][:2] == "OO":
            print("YES")
            ans[i] = "++"+ans[i][2:]
            for j in range(n):
                print(ans[j][:2]+"|"+ans[j][2:])
            break
        elif ans[i][2:] == "OO":
            print('YES')
            ans[i] = ans[i][0:2]+"++"

            for j in range(n):
                print(ans[j][:2]+"|"+ans[j][2:])
            break
    else:
        print("NO")


if __name__ == '__main__':
    main()
