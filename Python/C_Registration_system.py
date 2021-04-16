'''
Author     : knight_byte
File       : C_Registration_system.py
Created on : 2021-04-15 11:55:03
'''


def main():
    db = {}
    n = int(input())
    for _ in range(n):
        u = input()
        if u not in db:
            print("OK")
            db[u] = 0
        else:
            db[u] += 1
            print(f"{u}{db[u]}")


if __name__ == '__main__':
    main()
