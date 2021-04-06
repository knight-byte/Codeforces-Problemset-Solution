import re


def main():
    word = input()
    ans = word[0].upper() if word[0].islower() else word[0].lower()
    if len(word) > 1:
        re_word = word[1:]
        r = re.search(r"[a-z]", string=re_word)
        ans = word if r != None else word.capitalize(
        ) if word[0].islower() else word.lower()
    print(ans)


if __name__ == '__main__':
    main()
