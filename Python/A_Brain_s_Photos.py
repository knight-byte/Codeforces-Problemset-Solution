import re


def main():
    n, m = map(int, input().split())
    x = ""
    for i in range(n):
        x += input()
    re_word = re.findall(r"[CMY]", string=x, flags=re.IGNORECASE)
    if len(re_word) > 0:
        print('#Color')
    else:
        print("#Black&White")


if __name__ == '__main__':
    main()
