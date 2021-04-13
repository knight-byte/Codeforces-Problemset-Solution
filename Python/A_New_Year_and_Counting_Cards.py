import re


def main():
    cards = input()
    re_filter = re.findall(r"[13579aeiou]", string=cards)
    print(len(re_filter))


if __name__ == '__main__':
    main()
