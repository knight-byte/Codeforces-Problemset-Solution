'''
Author     : knight_byte
File       : A_Cards.py
Created on : 2021-04-20 14:27:55
'''


def main():
    n = int(input())
    s = input()
    z = s.count("z")
    o = s.count("n")
    print(f"{'1 '*o}{'0 '*z}".strip())


if __name__ == '__main__':
    main()
