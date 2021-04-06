import re


def main():
    num = input()
    x = re.findall(r"[47]", string=num)
    print("YES" if re.search(
        r"^[47]{1,}$", string=str(len(x))) != None else "NO")


if __name__ == '__main__':
    main()
