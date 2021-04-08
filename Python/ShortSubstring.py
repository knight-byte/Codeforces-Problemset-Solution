from typing import NewType


def main():
    t = int(input())
    for _ in range(t):
        n = input()
        new_sub = [n[i] for i in range(2, len(n), 2)]
        print(n[0]+"".join(new_sub)+n[-1])


if __name__ == '__main__':
    main()
