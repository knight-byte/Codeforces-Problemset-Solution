import re


def main():
    str1 = input()
    re_strip = re.findall(r"[a-z]", string=str1, flags=re.IGNORECASE)
    print(len(set(re_strip)))


if __name__ == "__main__":
    main()
