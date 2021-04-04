import re


def main():
    op = input()
    r = re.search(r"[HQ9]", string=op)
    print("YES" if r != None else "NO")


if __name__ == '__main__':
    main()
